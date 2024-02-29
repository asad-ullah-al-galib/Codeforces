#include<stdio.h>
int main()
{
    char name [50];
    int phone_number;
    int customer_id;
     
    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;
    int oil;
    int lipstick;
    int shaving_foam;


    int suger;
    int tea;
    int coffee;
    int rice;
    int wheat;
    int salt;
    int sauce;
    int chilli_powder;
    int cooking_oil;
    int tejpata;
    int dal;
    int milk;
    int suji;
    int tissue_paper;


    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;
    int fanta;
    int mojo;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("----------\n");
    printf("BILLING_SYSTEM\n");
    printf("------------\n");
    printf("Customer details\n\n");

    printf("Customer Name: ");
    scanf("%s",&name);
    printf("Customer number: ");
    scanf("%d", &phone_number);
    printf("Customer ID: ");
    scanf("%d",&customer_id);

    printf("----------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( tk 10 ) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream ( tk 25 ) : ");
    scanf("%d",&hair_cream);
    printf(" Body spray ( tk 50 ) : ");
    scanf("%d", &body_spray);
    printf(" Hair Spray ( tk 50 ) : ");
    scanf("%d", &hair_spray);
    printf("Oil ( tk 180 )");
    scanf("%d",&oil);
    printf("Lipstick ( tk 250 )");
    scanf("%d",&lipstick);
    printf("Shaving foam ( tk 150 )");
    scanf("%d",&shaving_foam);


    printf("----------------------\n");

    printf("GROCERIES\n");

    printf("Suger ( tk 100 ) : ");
    scanf("%d", &suger);
    printf("Tea ( tk 15 ) : ");
    scanf("%d", &tea);
    printf("Coffee ( tk 50 ) : ");
    scanf("%d",&coffee);
    printf("Rice ( tk 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( tk 160 ) : ");
    scanf("%d", &wheat);
    printf("salt ( tk 30 )");
    scanf("%d", &salt);
    printf("Sauce ( tk 60 )");
    scanf("%d",&sauce);
    printf("Chilli Powder ( tk 220 )");
    scanf("%d",&chilli_powder);
    printf("Cooking Oil ( tk 200 )");
    scanf("%d",&cooking_oil);
    printf("Tejpata ( tk 110 )");
    scanf("%d",&tejpata);
    printf("Dal ( tk 120 )");
    scanf("%d",&dal);
    printf("Milk ( tk 100 )");
    scanf("%d",&milk);
    printf("Suji ( tk 45 )");
    scanf("%d",&suji);
    printf("Tissue paper ( tk 50 )");
    scanf("%d",&tissue_paper);

    printf("---------------\n");

    printf("BEVERAGES\n");

    printf("Pepsi ( tk 30  ) : ");
    scanf("%d", &pepsi);
    printf("Sprite ( tk 35 ) : ");
    scanf("%d", &sprite);
    printf("Coke ( tk 30 ) : ");
    scanf("%d", &coke);
    printf("Mojitos ( tk 25  ) : ");
    scanf("%d",&mojitos);
    printf("Thumbs Up ( tk 35  ) : ");
    scanf("%d",&thumbs_up);
    printf("Fanta ( tk 80 )");
    scanf("%d",&fanta);
    printf("Mojo ( tk 70 )");
    scanf("%d",&mojo);

    printf("---------------\n");

    int boso;
    int hc;
    int hs;
    int bosp;
    int o;
    int lip;
    int shaf;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    o = 180 * oil;
    lip = 250 * lipstick;
    shaf = 150 * shaving_foam;

    cosmetics_total = boso+hc+hs+bosp+o+lip+shaf;

    printf("Body Soap : ");
    printf("%d tk\n",boso);
    printf("Hair Cream : ");
    printf("%d tk\n", hc);
    printf("Hair Spray : ");
    printf("%d tk\n", hs);
    printf("Body spray : ");
    printf("%d tk\n", bosp);
    printf("Oil : ");
    printf("%d tk\n",o);
    printf("lipstick : ");
    printf("%d tk\n",lip);
    printf(" Shaving foam : ");
    printf("%d tk\n",shaf);
    printf("Total Cosmetic price : ");
    printf("%d tk\n", cosmetics_total);

    printf("----------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;
    int sal;
    int sau;
    int chp;
    int co;
    int tej;
    int d;
    int mi;
    int su;
    int tip;


    s = 100 * suger;
    t = 15 * tea;
    c = 50 * coffee;
    r = 150 * rice;
    w = 160 * wheat;
    sal = 30 * salt;
    sau = 60 * sauce;
    chp = 220 * chilli_powder;
    co = 200 * cooking_oil;
    tej = 110 * tejpata;
    d = 120 * dal;
    mi = 100 * milk;
    su = 45 * suji;
    tip = 50 * tissue_paper;


    grocery_total = s + t + c + r + w + sal + sau + chp + co + tej + d + mi + su + tip;

    printf("Suger : ");
    printf("%d tk\n", s);
    printf("Tea : ");
    printf("%d tk\n", t);
    printf("Coffee : ");
    printf("%d tk\n", c);
    printf("Rice : ");
    printf("%d tk\n", r);
    printf("Wheat : ");
    printf("%d tk\n", w);
    printf("Salt : ");
    printf("%d tk\n", sal);
    printf("Sauce : ");
    printf("%d tk\n", sau);
    printf("Chilli powder : ");
    printf("%d tk\n",chp);
    printf("Cooking oil : ");
    printf("%d tk\n",co);
    printf("Tejpata : ");
    printf("%d tk\n",tej);
    printf("Dal : ");
    printf("%d tk\n",d);
    printf("Milk : ");
    printf("%d tk\n",mi);
    printf("Suji : ");
    printf("%d tk\n",su);
    printf("Tissue paper : ");
    printf("%d tk\n",tip);
    printf("Total grocery Price : ");
    printf("%d tk\n",grocery_total);


    printf("-------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;
    int f;
    int mo;

    pep = 30 * pepsi;
    spr = 35 * sprite;
    cok = 30 * coke;
    moj= 25 * mojitos;
    thu = 35 * thumbs_up;
    f= 80 * fanta;
    mo = 70 * mojo;
    beverage_total= pep + spr + cok + moj + thu + f + mo;

    printf("Pepsi : ");
    printf("%d tk\n", pep);
    printf("Sprite : ");
    printf("%d tk\n", spr);
    printf("Coke : ");
    printf("%d tk\n", cok);
    printf("Mojitos : ");
    printf("%d tk\n", moj);
    printf("Thumbs Up : ");
    printf("%d tk\n", thu);
    printf("Fanta : ");
    printf("%d tk\n",f);
    printf("Mojo : ");
    printf("%d tk\n",mo);
    printf(" Total Beverage Price : ");
    printf ("%d tk\n", beverage_total);

    printf("--------------------------\n");

    total= cosmetics_total+ grocery_total + beverage_total;

    printf("Total amount : ");
    printf("%d tk\n", total);

    printf("--------------------------\n");

    printf("--------------------------------------\n");

    printf("GALIB SUPER MARKET\n\n");

    printf(" Customer Name : ");
    printf("%s\n",name);
    printf("Customer Phone Number : ");
    printf("%d\n", phone_number);
    printf("Customer ID : ");
    printf("%d\n", customer_id);


    printf("Product name                 Quantity                 price\n\n");
    printf("Body soap                    %d                      %d\n",body_soap,boso);
    printf("Hair cream                   %d                      %d\n",hair_cream,hc);
    printf("Hair Spray                   %d                      %d\n", hair_spray,hs);
    printf("Body Spray                   %d                      %d\n", body_spray,bosp);
    printf("Oil                          %d                      %d\n",oil,o);
    printf("Lipstick                     %d                      %d\n",lipstick,lip);
    printf("Shaving Foam                 %d                      %d\n",shaving_foam,shaf);
    printf("Suger                        %d                      %d\n",suger,s);
    printf("Tea                          %d                      %d\n",tea,t);
    printf("coffee                       %d                      %d\n",coffee,c);
    printf("Rice                         %d                      %d\n", rice,r);
    printf("Wheat                        %d                      %d\n",wheat,w);
    printf("Salt                         %d                      %d\n",salt,sal);
    printf("Sauce                        %d                      %d\n",sauce,sau);
    printf("Chilli powder                %d                      %d\n",chilli_powder,chp);
    printf("Cooking oil                  %d                      %d\n", cooking_oil,co);
    printf("Tejpata                      %d                      %d\n",tejpata,tej);
    printf("Dal                          %d                      %d\n",dal,d);
    printf("Milk                         %d                      %d\n",milk,mi);
    printf("Suji                         %d                      %d\n",suji,su);
    printf("Tissue Paper                 %d                      %d\n",tissue_paper,tip);
    printf("Pepsi                        %d                      %d\n",pepsi,pep);
    printf("sprite                       %d                      %d\n",sprite,spr);
    printf("Coke                         %d                      %d\n",coke,cok);
    printf("Mojitos                      %d                      %d\n",mojitos,moj);
    printf("Thumbs Up                    %d                      %d\n",thumbs_up,thu);
    printf("Fanta                        %d                      %d\n",fanta,f);
    printf("Mojo                         %d                      %d\n",mojo, mo);

    printf("Grocery Total price : %d\n\n", grocery_total);
    printf("Cosmetic Total Price : %d\n\n",cosmetics_total);
    printf("Beverage Total Price : %d\n\n", beverage_total);
     printf("Total Price : %d\n\n",total);

     printf("--------------------------------------------------------\n");

     return 0;  
}