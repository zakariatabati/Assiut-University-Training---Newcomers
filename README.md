# Assiut University Training - Newcomers

<a href="https://codeforces.com/group/MWSDmqGsZm/contests"><img src="download.png"></img> </a>


### [ 👆 Sheets link 👆](https://codeforces.com/group/MWSDmqGsZm/contests)

## Description
 THIS REPO IS YOUR FIRST STEP IN COMPATITVE PROGRAMING WORLD :<br />
 By following this repo you will solve all of necomers training and you will improve your problem solving skills. <br />
 I solved all those problems by using c++ programing language . <br />
 I sorted the repo folders to help you organize your steps . <br />

 ## Solutions
 I impleneted more than one solution in some problems . <br />
 i capsulated using functions like this following example:
* solution number 1 👇
 ```
 
void solution1()
{
    string str, temp;
    getline(cin, str);
    char ch;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            temp += str[i];
        }

        if ((str[i] == ' ' || i == str.size() - 1) && temp.size() != 0)
        {

            for (int j = 0; j < temp.size() / 2; j++)
            {
                ch = temp[j];
                temp[j] = temp[temp.size() - 1 - j];
                temp[temp.size() - 1 - j] = ch;
            }

            if (i == str.size() - 1)
            {
                cout << temp;
            }
            else
            {
                cout << temp << " ";
            }
            temp.clear();
        }
    }
}
 ```
 * solution number 2 👇
 ```
void solution2()
{
    string str;
    bool space = false;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        if (space)
        {
            cout << " ";
        }
        space = true;
        cout << str;
    }
}
 ```
* just call any one of them 👇
 ```
int main()
{
    solution2();
}
 ```

## my codeforces handle 👇:


  <a href="https://codeforces.com/profile/Mina__Faried/">
         <img alt="Mina__Faried" src="https://userpic.codeforces.org/2030369/title/dbebd05c8d274718.jpg"
         width="150" >
  <p>Mina__Faried</p>
</a>

<h3 align="left">Connect with me:</h3>
click the icon to contact 👆 :
<p align="left">
<a href="https://twitter.com/mina_eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="mina_eldihabi" height="30" width="40" /></a>
<a href="mina.el.dihabi3.6.9@gmail.com" target="blank"><img align="center" src="https://image.similarpng.com/very-thumbnail/2021/09/Gmail-icon-design-template-on-transparent-background-PNG.png" alt="mina_eldihabi" height="30" width="30" /></a>
<a href="https://linkedin.com/in/minafaried" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="minafaried" height="30" width="40" /></a>
<a href="https://fb.com/mina.f.eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/facebook.svg" alt="mina.f.eldihabi" height="30" width="40" /></a>
<a href="https://instagram.com/mino_f.eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="mino_f.eldihabi" height="30" width="40" /></a>
</p>