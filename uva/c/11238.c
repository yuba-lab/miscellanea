#include<stdio.h>
char ans[][25]={"1","20","210","1540","8855","42504","177100","657800","2220075",
"6906900","20030010","54627084","141116637","347336412","818558424","1854631380",
"4053948342","8574134256","17590903116","35084425512","68153183370","129156542039",
"239128282128","433093980298","768175029950","1335679056261","2278764308864",
"3817721269708","6285424931278","10176048813473","16210652213304","25423690787719",
"39274771758064","59789973730461","89736657900900","132834787033075","194006223597572",
"279661205716974","398018151390200","559449136091831","776838931567572",
"1065940588576732","1445705502357343","1938561121705315","2570605432880903",
"3371684590465908","4375319099346208","5618445228564793","7140942201229333",
"8984922304030443","11193770355829009","13810930667765157","16878453276117746",
"20435326129713654","24515635362932954","29146610869639549","34346628376654913",
"40123251227815383","46471404549689351","53371780703441318","60789577452586487",
"68673668434334934","76956298564663402","85553384395717227","94365480254213528",
"103279445170253902","112170812747354087","120906827121834566","129350064451661348",
"137362512979745598","144809940796620325","151566341291631624","157518221668013078",
"162568486673578693","166639683923175378","169676402232105648","171646676234883305",
"172542309343731946","172378125687965848","171190226627438257","169033430825208027",
"165978103316094584","162106654714921075","157509948809043576","152283892386077931",
"146526364181517039","140334651650668803","133803399444707801","127023103852577896",
"120079021507938035","113050455155943519","106010240661754449","99024411737621323",
"92151904402003308","85444345654857875","78945863453573001","72693023944120045",
"66714881583314335","61033240145235763","55663091133973346","50613244155051856",
"45887089510794122","41483436078768079","37397371704961189","33621048067136846",
"30144388614623696","26955619314626157","24041709119775647","21388640692533960",
"18981680119465910","16805547548715206","14844654231857239","13083276623221517",
"11505812292077067","10096971927616045","8842020009154293","7726929590817265",
"6738528470417086","5864552560171552","5093653838062639","4415377510495980",
"3820097597373727","3298981687014508","2843905747206868","2447444695948898",
"2102793053565659","1803790254604935","1544848145184291","1320992367181792",
"1127775864826813","961294388171457","818085023387881","695128788327698",
"589753122859383","499630252931260","422696870992462","357151976811922",
"301400973036441","254052574077937","213889601295347","179862464456172",
"151065169242834","126722015973414","106169469752641","88840622360686",
"74252067274687","61990415093876","51701385089887","43082666091665","35870481552300",
"29843343433392","24808172866872","20607116162379","17101443169235","14181008701762",
"11747089496422","9723545122578","8040378083433","6644452641044","5486702080236",
"4529003381568","3736165201688","3081105018158","2539255963377","2091793858275",
"1721930513702","1416734360140","1164733232308","957190045595","785911852914",
"645295369580","529489941608","434606120455","356481490646","292487050484","239755303889",
"196550315542","160954253448","131791387388","107847709116","88241591630","72162948863",
"59038079745","48284335855","39509743432","32308399043","26423428886","21582203262",
"17624621529","14368737009","11720626558","9552812749","7790240907","6351933169",
"5185250585","4232118751","3457204258","2821392492","2302090127","1874802017","1526313637"
,"1239515641","1007719386","818568928","666193896","542061609","442072320","360234562",
"293886739","239045260","194337731","157306293","127325163","102799565","83194097",
"67300605","54691522","44477808","36317458","29606794","24117404","19554213","15820964",
"12736481","10258846","8244157","6659561","5381526","4385243","3576841","2930385",
"2376760","1924226","1541327","1231527","975760","777090","617547","498228","404981",
"335065","275998","226966","183727","148442","117291","93525","73010","57960","45826",
"37965","31193","26131","21406","17422","13613","10696","7975","6005","4374","3534",
"3016","2635","2264","1933","1603","1323","1045","810","585","406","277","258","227",
"206","173","150","115","90","53","26","15","15","14","14","13","13","12","12","11","11",
"1","1","1","1","1","1","1","1","1","1"};
main()
{
    int i;
    while(scanf("%d",&i) && i>=0)
        puts(ans[i]);
}