#include <iostream>
using namespace std;

int main()
{
    /*1.
    char a;
    cout<<('f'-'a')<<endl;//ekhane f er position
    //jante parbo.a=0,b=1 so f hoilo 5.then it will
    //print 5.a=97,b=98 evabe kore f=102.
    //102-97=5 which is the position of f.*/
       /*
       2.char str[10]="abcd";ekhane size na dileu hbe print.akhn
       10 size deoa ace mane 10 size porjontw nite parbebut abcd aksathe deoa that mean
       4 ta.er por 10 size porjontw '\0' eta auto niye nei.
       jketa pele erpor er ghor a r jay na,etai null character

    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl; */
    /*
    3. this type will not work
    char str3[10];
    str3="abc";
    cout<<str3<<endl;*/
    /* 4.char str4[6]={'a','b','c','d','e'};
    cout<<str4<<endl; */
    /* eta gurbadge ase
    karon  5.char str5[]={'c','d','e'};
    cout<<str5<<endl;*/
    /*
    char str[10];
    str[0]='a';
    str[1]='b';
    cout<<str<<endl; o buje na j koi ses hbe str ta.so, ekhane gurbadge asbe cz o porer gulo pacce na.tokhon vul valu asce.
    str[2]='\0'; // etai bole j string ta kothay ses hbe.so null khub important .ekhane null add kore dilam
    cout<<str<<endl; ///akhn r oi gurbadge asbe na.karon o eta dekhe stop kore dey nest gulo te r jay na  */
    /*
    char str[1000001]; ak size boro length niyeci
    int ans=0;
    cin>>str;
    int n= strlen(str);
    for(int i=0;i<n;i++)
    {
        ans=ans+(str[i]-'0'); //str[i] diye bujai j str er gulor access nicci.jamon 351 so s[0]=3 evabe next ulor access nilam.ekhane 0 minus korar karon hoilo amra integer kore nicci.kono akta char er integer koto seta ber korar upay hoilo amra just 0 char ta minus korbo.//
    }
       cout<<ans<<endl;


*/
    return 0;


}
