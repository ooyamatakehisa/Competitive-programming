-- レシピは誰が作ったものかわからないので、この回答では各レシピは各ユーザーがつくったもので、

CREATE TABLE resipes (id INT NOT NULL PRIMARY KEY, resipe_name VARCHAR(100) DEFAULT NULL);
CREATE TABLE photo_report (report_id INT NOT NULL PRIMARY KEY, recipe_id INT NOT NULL, user_id INT);

SELECT
    COUNT(id) AS cnt
FROM
    recipes LEFT JOIN photo_report ON recipes.id = photo_report.recipe_id
WHERE
    photo_report.recipe_id IS NULL  