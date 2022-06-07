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
cout << "</head>\n";
cout<<"  <style>"

"    * {"
"  padding: 0;"
"  margin: 0;"
"  box-sizing: border-box;"
"}"

/* header {
  position: relative;
} */

"body {"
"  font-family: 'Roboto', sans-serif;"
"}"
"nav {"
"  background: #fe9a99;"
"  height: 10vh;"
"  width: 100%;"
"  display: flex;"
"  align-items: center;"
"  padding-right: 60px;"
"}"
".logo {"
"  margin-left: 40px;"
"}"
""
".logo h1 {"
"  text-align: center;"
""
"  letter-spacing: 2px;"
"  font-size: 30px;"
"}"
".list-items {"
"  flex: 2;"
"  display: flex;"
"  justify-content: space-evenly;"
"}"
""
".list {"
"  list-style: none;"
"  "
"}"
""
".link {"
"  text-decoration: none;"
"  color: black;"
"  font-family: 'Pirata One', cursive;"
"  font-weight: bold;"
"  font-size: 18px;"
"}"
""
".link:hover {"
"  color: yellow;"
"}"
""
".main {"
"  background: #fe9a99;"
"  height: 18cm;"
"  display: flex;"
"  justify-content: space-evenly;"
"}"

".main-left {"
"  height: 60%;"
"  width: 50%;"
"}"
".main-right {"
"  height: 100%;"
"  width: 50%;"
"  display: flex;"
"  justify-content: center;"
"  align-items: center;"
"  flex-direction: column;"
"}"
".img-v {"
"  height: 10cm;"
"  width: 18cm;"
"  border-radius: 15%;"
"  /* filter: grayscale(53%); */"
"  filter: contrast(150%);"
"  /* opacity: 0.6; */"
"}"
"#left{"
"  float: left;"
"  height : 7.5cm;  "
"  margin-left: 1%; "
""
"}"
""
".main-right p {"
"  font-size: 0.9cm;"
"  padding-top: 20px;"
"  font-family: 'Zen Tokyo Zoo', cursive;"
"}"
""
".text {"
"  margin-left: 18%;"
"  padding-top: 10%;"
"}"
""
".text span {"
"  font-size: 3cm;"
"  letter-spacing: 25px;"
"  font-weight: bold;"
"}"
""
".text p {"
"  padding-top: 18px;"
"  font-weight: bold;"
"  letter-spacing: 1px;"
"  line-height: 25px;"
"}";
cout<<"</style>";
cout<<"<body>"
"      <header>"
"        <nav>"
"          <div class='logo'><h1>COVID-19 Dashboard</h1></div>"
"          <ul class='list-items'>"
"            <li class='list'><a href='api.php' class='link'>Covid Updates</a></li>"
"  "
"            <li class='list'><a href='user.cgi' class='link'>Register here</a></li>"
"  "
"            <li class='list'><a href='user_login.cgi' class='link'>User Login</a></li>"
"  "
"            <li class='list'><a href='admin.cgi' class='link'>Admin Login</a></li>"
"  "
"            <!-- <li class='list'><a href='#' class='link'>Contact</a></li> -->"
"          </ul>"
"        </nav>"
"        <div class='main'>"
"          <div class='main-left'>"
"            <div class='text'>"
"              <img"
"              id = 'left'"
"              src = 'cor.png'"
"              />"
"              <span>COVID</span>"
"              <p>"
"                Coronavirus disease 2019 (COVID-19) is a contagious disease caused by severe ""            acute respiratory syndrome coronavirus 2 (SARS-CoV-2). The first known case was"
"                identified in Wuhan, China, in December 2019.The disease has since spread ""worldwide, leading to an ongoing pandemic."
"              </p>"
"            </div>"
""
"          </div>"
"          <div class='main-right'>"
"            <img"
"              class='img-v'           "
"              src = 'img src.jpeg'"
"            />"
"            <p><b>COVID-19</b></p>"
"          </div>"
"        </div>"
"      </header>";

  cout << "</body>\n";
  cout << "</html>";
}
int main() {
  set_content_type("text/html"); 
  set_page_title("COVID-19 DASHBOARD");  
  bodyHtml();
  return 0;
}
   
  