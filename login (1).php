<?php
 
  // servername => localhost
  // username => root
  // password => empty
  // database name => User
  $conn = mysqli_connect("localhost", "root", "", "User");    
 
  if($conn === false){
      die("ERROR: Could not connect. "
          . mysqli_connect_error());
  }  

  $adhaar =  $_REQUEST['adhaar'];
  $age = $_REQUEST['age'];
  $username =  $_REQUEST['username'];
  $password = $_REQUEST['password'];
  $date = $_REQUEST['date'];
  $status = "Unvaccinated";

  $password = md5($password);
  $sql = "INSERT INTO registrationtable  VALUES ('$adhaar',
      '$age','$username','$password','$date','$status')";
    
  if(mysqli_query($conn, $sql)){
      echo "<meta http-equiv='refresh' content=0;url='user_login.cgi' />";
  } else{
      echo "Adhaar Card Number already Registered! \n";
      echo "<a href='user_login.html' target='_blank'>Please Click here to login</a>";
  }
  mysqli_close($conn);
  ?>