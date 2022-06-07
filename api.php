<!DOCTYPE html>
<html>
<style>
h2{
  text-align: center;
  font-size: 1cm;
   color: red;
   font-family: 'Bad Script', cursive;
}
  table, th, td {
  border: 1px solid black;
}
th, td {
  padding: 10px;
  text-align: left;
  font-family: 'Merienda', cursive;
}
th, td {
  border-bottom: 1px solid #ddd;
}
tr:nth-child(even) {
    background-color: #f2f2f2;
}
tr:hover {background-color: yellow;}


th {
  background-color: #04AA6D;
  color: white;
}
</style>
<body>

    <h2>CORONA INDIA LIVE UPDATES</h2>

    <table style="width:100%">
        <tr>
            <th><---Last Updated Time---></th>
            <th><---Indian States---></th> 
            <th><---Confirmed Cases---></th>
            <th><---Active Cases---></th> 
            <th><---Recovered Cases---></th>
            <th><---Total Deaths---></th>                   
            <!-- <td>Available Date</td> -->
        </tr>

        <?php

        $data = file_get_contents('https://api.covid19india.org/data.json');
        $coranalive = json_decode($data, true);

        $statescount = count($coranalive['statewise']);


        $i=1;
        while($i < $statescount){

        ?>

        <tr>
            <td> <?php echo $coranalive['statewise'][$i]['lastupdatedtime']  ?> </td>
            <td> <?php echo $coranalive['statewise'][$i]['state'] ?> </td>
            <td> <?php echo $coranalive['statewise'][$i]['confirmed']  ?> </td>
            <td> <?php echo $coranalive['statewise'][$i]['active'] ?> </td>
            <td> <?php echo $coranalive['statewise'][$i]['recovered']  ?> </td>
            <td> <?php echo $coranalive['statewise'][$i]['deaths']  ?> </td>
        </tr>

        <?php

        $i++;
        }


        ?>
</body>
</html>
