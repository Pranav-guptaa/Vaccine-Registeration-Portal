#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void set_content_type(string content_type)
{
  cout << "Content-type: " << content_type << "\r\n\r\n";
}
void set_page_title(string title) 
{
  cout << "<title>" << title << "</title>\n";
}

void bodyHtml()
{
  cout << "<!doctype html>\n";
  cout << "<html lang=\"en\">\n";
  cout << "<head>\n";
  set_page_title("User's Interface");
  cout << "</head>\n";
  cout<<"<style>\n";
  //   const char *s = "";
  //   cout<<s;
  cout<<"body {"  
  "margin:0;"
  "padding:0;"
  "background-image: url('org.png');"
  "background-size: cover;"
  "font-size:16px;"
  "font-family: 'Montserrat', sans-serif;"
  "font-weight:300;  "
"}"
"::placeholder{"
"color: burlywood;"
"opacity: 1;"
"}"

"#login-box {"
"position:relative;"
"margin: 2.5% auto;"
"height:500px;"
"width:400px;"
"background: transparent;"
"border-radius: 23px;"
"box-shadow: 0 4px 20px rgba(0,0,0,0.6);"
"}"
/* .bg-image{
  background-image: url('corona.jpg');
  background-size: cover;
} */

".left-box {"
"  text-align: center;"
"  position:absolute;"
"  top:0%;"
"  left:0%;"
"  box-sizing: border-box;"
"  padding:40px;"
"  width:400px;"
"  height:500px;"
"}"
"h1{"
"  margin: 2.5% auto;"
""
"    text-align: center; "
"    color:lightgray;"
"    text-shadow:2px 1px rgb(168, 167, 170);"
"    font-weight:300;"
"    font-size:0.90cm;"
"  "
"}"
"input[type='text'], input[type='password'] {"
"  text-align: left;    "
"  display:block;"
"  box-sizing:border-box;"
"  margin-bottom:20px;"
"  padding:4px;"
"  width:300px;"
"  height:32px;"
"  border:none;"
"  outline:none;"
"  border-bottom:1px solid rgb(110, 8, 8);"
""
"  "
"  font-family:sans-serif;"
"  font-weight:400;"
"  font-size:15px;"
"  transition: 0.2s ease;"
"  background: transparent;  "
"  border: 1px solid tan ;"
"  border-radius: 2px;"
"  color: rgb(2, 36, 17);"
"}"
""
"input[type='int'], input[type='age'] {"
"  text-align: left;"
"  display:block;"
"  box-sizing:border-box;"
"  margin-bottom:20px;"
"  padding:4px;"
"  width:300px;"
"  height:32px;"
"  border:none;"
"  outline:none;"
"  border-bottom:1px solid tan;"
"  font-family:sans-serif;"
"  font-weight:400;"
"  font-size:15px;"
"  transition: 0.2s ease;"
"  background: transparent;"
"  border: 1px solid tan;"
"  border-radius: 2px;"
"  color: #fff;"
"}"
""
"input[type='date'], input[type='date'] , input[type='datetime-local']{"
"  text-align: left;"
"  display:block;"
"  box-sizing:border-box;"
"  margin-bottom:20px;"
"  padding:4px;"
"  width:300px;"
"  height:32px;"
"  border:none;"
"  outline:none;"
"  border-bottom:1px solid tan;"
"  font-family:sans-serif;"
"  font-weight:400;"
"  font-size:15px;"
"  transition: 0.2s ease;"
"  background: transparent;"
"  border: 1px solid tan;"
"  border-radius: 2px;"
"  color: tan;"
"}"
""
"input[type='submit'] {"
"  margin-bottom:28px;"
"  width:100px;"
"  height:32px;"
"  background:#07056d;"
"  border:none;"
"  border-radius:2px;"
"  color:#fff;"
"  font-family:sans-serif;"
"  font-weight:500;"
"  text-transform:uppercase;"
"  transition:0.25s ease;"
"  cursor:pointer;"
"}"
"input[type='submit']:hover,input[type='submit']:focus {"
"  background:darkgoldenrod;"
"  transition: 0.2s ease;"
"}"
"h6{"
"  /* text-align: center;  */"
""
"  color:tan;"
"  /* text-shadow:2px 1px rgb(168, 167, 170);"
"  font-weight:300; */"
"  font-size:0.5cm;"
"  /* font-style: italic; */"
"}"
"h7{"
"  color: red;"
"  font-size:0.6cm;"
""
"}"
""
"/* h4{"
""
"} */"
""
"h4{"
"    text-align: left;"
"    font-size:0.4cm;"
"    font-family: 'Architects Daughter', cursive;"
"font-family: 'Satisfy', cursive;"
""
"color:rgb(27, 27, 1);"
""
"}";
  cout<<"</style>";
  
  cout << "<body>\n";

    cout<<"<div id='login-box'>\n";
    cout<<"<div class='left-box'>\n";
    cout<<"<h1> Register Yourself here !! </h1>\n";
    cout<<"<form method='POST' action='login (1).php'>\n";
    cout<<"<input type='int' name='adhaar' \n";
    cout<<"placeholder='Enter a valid Adhaar Card Number' required/>\n";
    cout<<"<input type='int' name='age' \n";
    cout<<"placeholder='Enter your age'/>\n";
    cout<<"<input type='text' name='username' \n";
    cout<<"placeholder='Enter a valid Username' required/> \n";
    cout<<"<input type='datetime-local' name='date' \n";
    cout<<"placeholder='Date for Vaccination' required/> \n";
    cout<<"<input type='password'  name='password' \n";
    cout<<"placeholder='Enter a Password' required/> \n";
    cout<<"<br>"    
    "<br>"
    "<input type='submit' name='singup-button' placeholder='Sign Up'/>"
    "</form>"
    "<br>"
    "<br>"  
    "<br>"
    "<br>"
    "<a href='user_login.cgi'><h6><i>Already Registered? Click here to Login</i></h6></a>"    
    // "<a href='admin.cgi'><h7>Login as Administrator</h7></a>"
  "</div>"
"</div>";
  cout << "</body>\n";
  cout << "</html>";
}
int main() {
  set_content_type("text/html");
  // Output HTML boilerplate
  bodyHtml();
  return 0;
}