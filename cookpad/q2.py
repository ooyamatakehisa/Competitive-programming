import sys
import urllib.request
import json


def cnt_num_recipes(body : dict):
    if "subcategories" in body:
        cnt = 0
        for subcategory in body["subcategories"]:
            cnt += cnt_num_recipes(subcategory)
        return cnt
    else:
        return body["recipes"]


def find_category(body : dict, category_name : str):
    if body["name"] == category_name:
        return body
    else:
        if "subcategories" in body:
            for subcategory in body["subcategories"]:
                ret = find_category(subcategory, category_name)
                if ret is not None:
                    return ret
        else:
            return None

def main(category_name : str, url : str):
    try:
        with urllib.request.urlopen(url) as response:
            body = json.loads(response.read())
            body = find_category(body, category_name)
            if body is not None:
                num_recipes = cnt_num_recipes(body)
                print(num_recipes)
            else:
                print("can't find the specified category")

    except urllib.error.URLError as e:
        print(e.reason)


if __name__=='__main__':
    url = 'https://static.cookpad.com/hr/screen/categories.json'
    args = sys.argv
    main(args[1], url)