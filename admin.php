<?php

    $db = mysqli_connect("localhost","root","","user");

    if(!$db)
    {
        die("Connection failed: " . mysqli_connect_error());
    }

?>