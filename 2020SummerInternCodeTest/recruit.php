<?php 

    $token = $argv[1];  

    $url = 'https://challenge-server.code-check.io/api/kidnapper/start?token='.$token;
    $curl = curl_init($url);

    curl_setopt($curl, CURLOPT_CUSTOMREQUEST, 'GET');
    curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false); 
    curl_setopt($curl, CURLOPT_RETURNTRANSFER, true); 

    $response = curl_exec($curl);
    $result = json_decode($response, true);

    curl_close($curl);

    $next = $result["goto"];
    $flag = true;
    while(true) {
      $url = 'https://challenge-server.code-check.io/api/kidnapper/deliver?token='.$token.'&to='.$next;
      $curl = curl_init($url);

      curl_setopt($curl, CURLOPT_CUSTOMREQUEST, 'GET');
      curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false); 
      curl_setopt($curl, CURLOPT_RETURNTRANSFER, true); 

      $response = curl_exec($curl);
      $result = json_decode($response, true);

      if (isset($result["goto"])) {
        $next = $result["goto"];
      } elseif (isset($result["put_the_bag"])) {
        break;
      } else {
        $flag = false;
        break;
      }

      curl_close($curl);

    }

    if ($flag) { print $next; }