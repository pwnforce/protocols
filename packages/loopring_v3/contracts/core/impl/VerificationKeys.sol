// SPDX-License-Identifier: Apache-2.0
// Copyright 2017 Loopring Technology Limited.
// Modified by DeGate DAO, 2023
pragma solidity ^0.7.0;


/// @title Hard coded verification keys
/// @dev Generated on 11-Apr-2023 11:44:54, +07
/// @author Berg Jefferson - <berg@dgfans.io>
library VerificationKeys
{
    function getKey(
        uint blockType,
        uint blockSize,
        uint blockVersion
        )
        internal
        pure
        returns (uint[14] memory vk, uint[4] memory vk_gammaABC, bool found)
    {
        if (blockType == 0 && blockSize == 355 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              8784538352103544680544878569619633069286083932582545941496458603046818302532,
              21648363849698280106394784764113647897280169853712601216492738905134979055640,
              12113343877939370604059730323953748020167123825465139942787941544590851447603,
              17860672404560553406804732120373414225886864244229187254216976620688017704505
            ];
            vk_gammaABC = [
              6154759800727527048208100447065751592039902387097803200029822832426260239363,
              5986117161970146962752513955722959425732161191503024685217801208634710577786,
              937097291856302928916368018648858823309397389879989126199717335871410920053,
              16307402130624676642736973369304182775582201206433672350640385611090747375090
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 300 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              4747955692483067772308318587415967610398454018379630612596851644675920255036,
              11329897094260727327989813350572608280108302990743237539876046612299431907740,
              8873499132820766915470814753978217112280162662109894032108656387332727222877,
              10158388304642048469951914864855923192463021881832527027409260053219943275285
            ];
            vk_gammaABC = [
              16651548375569746195656570840235550700994288882729305649570659623515860877628,
              9879702970394785959210782688871209903010998686060193834464015713002640780276,
              5723418409241761603969411966858769820691042460369773749661312245649964854992,
              20434570015310898647089678774679180797767479764974323812963795733452220803009
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 250 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              11182755481462438379213191509479644532470435293054770461631826731735665851050,
              8292557992667277657300707643166138761668301086182391879359976315208518976405,
              18366964884508028540025036467126890803699601355786835455993811595786957939096,
              900537295133976455087300759962616225871458336754595738167622191250109222823
            ];
            vk_gammaABC = [
              6333771999757102163655577055317945725296972892098736206172425341645142683948,
              9234199208605299653041173125980318687080675601043588370022137401901679268243,
              17600556694764736291937390668944170001780557836403483455115490089342180788268,
              14281744364110609092505621317540557374203701786165940889320091243810935656604
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 200 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              15507132891597317446931861219663948078022814774145513599214864331939470213687,
              5685868260410174253262076419938782319407108084610909286587299710205571511605,
              4729285692597119610072501966805527354106942546121296710784508184103975326063,
              7008896191941032825821162846554940812502651290486410736060678529920663036638
            ];
            vk_gammaABC = [
              19359239074840306948693123635362867701942968777660082989917288096102083411108,
              12852377488837155535558791084592321901778396457139261275108963319769039981987,
              10247430062824978040611756094885979035087178762323810333116161989956619404045,
              889058745861907269701500854512221096371575738310536283949460569077774161413
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 150 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              12046915847436427808797215864795211538985988200404944304088362311587752679461,
              2836535876448322966272274299623480677569948946646379415475491880908465894094,
              20564321642567480757016126470556472176992830195880274967059869784683670284131,
              18254067943493611050107576491657850633635936383905959736502132154689274760404
            ];
            vk_gammaABC = [
              784898175304000497939645325114184529556206078622719988757338927517196491105,
              11719495144678724556381220356525131382173591030323769752386787242343398558589,
              2261001650755314303247646610805020428628138223315727480727317315040426475785,
              2647338121854271434391407366219284534447544635403619449227969706203185252979
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 100 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              2605866266672960200467142668466082624748113684622104884896922575956497526754,
              609455949401253732196053612226022194372470911160436084844854167927088461257,
              3980570836161694190032467012904542479676945193790662191193755381525938533717,
              14084656950434588371070294070151917111349595382494097623998171042670111234987
            ];
            vk_gammaABC = [
              12600696019503419743569076041481290871534632240786743989885961529819029195075,
              18337338474776158492240498787610045195222023382110359691697636703643611198111,
              8690954427690606460223990064278965215405764848150797565633191279158039043921,
              18253003144666534577122704550119274008118866518518375747615157145757761935304
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 50 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              9462989441952398475049803740288403081280558335403094538350299925745497676701,
              2960176382516232001818500473181134712339286795386066402876934958003133412219,
              16438384370689427037987401102792504750542910351966618258654778320567433848435,
              3401688728570393693379387779284613900749166337460165896399055099543910428150
            ];
            vk_gammaABC = [
              10480014149692890646930705497621060728595138655330314889705093419542311015998,
              4679269646022302528248348817927381280014823292153947070975104636680966863005,
              19190325509017272094108783001308988031170872461349384133937622397591944878744,
              19142598844650906162779561473585908239898492961632422619734253204589859038776
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 25 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              448149886349620760576175214516173742326657822735137905922313116464173504103,
              4929075781575170759971924837499033608454405873493501083551961673165144790309,
              18558261575517349648467561870559244983019358532372422861349906403233212367622,
              15824129899911016862422865499180607941870299625776971354825182803154223497955
            ];
            vk_gammaABC = [
              12654105164742611145874596631045701775460489635361003220760146341475988478997,
              15479498270635111435624945116639076100818802093753267084043714331168954584642,
              21001468645325530302380094268191927423206548414291825260561093702708374072222,
              13673310815289060788777642550823650515774831138594135912456465824383460106163
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 10 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              15868364611863585087175494820824776881600040882160436994910805995558642515398,
              9196443539467153624334088201520074819906562754537442404835244438199142837078,
              9578105535232751231439753379774199230917782465775995229361624374317450163776,
              6637813986356313109463759776683907894602496572516123953655275535229112224877
            ];
            vk_gammaABC = [
              1541628895787759189288185605888350030828411023426491785221415993167385722160,
              11592373080133128775774724371446859248381871207618673406351326349827677624840,
              5747029919253340747421366752416647676535937020883132819591349266848369937991,
              15424434633948383200877610552749524693502371096312710412344425727169935560277
            ];
            found = true;
        } else if (blockType == 0 && blockSize == 5 && blockVersion == 0) {
            vk = [
              5352502781177947990917130463223399859512438492630961972971092263507416941516,
              15740437711478785114349806024529911308972872013948538929238342659340522712126,
              857813897181731197783915787862562304226029941350914163907371544319541895260,
              7957246859073493699836222386708957497839125015489338533609373877535608740778,
              15248382147802000479459044690531195440846921222336500821300479761117402252465,
              1793540727469341929692272133594052943856871084761890962840372296656862838809,
              11559732032986387107991004021392285783925812861821192530917403151452391805634,
              10857046999023057135944570762232829481370756359578518086990519993285655852781,
              4082367875863433681332203403145435568316851327593401208105741076214120093531,
              8495653923123431417604973247489272438418190587263600148770280649306958101930,
              5247777729988598287106995776749297875785027826696934352128795156086624450194,
              5908241076113038557991606167471356299841167658696245541116430806675911147204,
              12696835005594814759424641929482009800802834730358602423220255021859048777192,
              12061905920204481582130412492899952626011128681660782227171339091582457380150
            ];
            vk_gammaABC = [
              16993593899733644870336397849091495493452059897613484913307748430166933382414,
              10029328427974761716247230971922731503862911711448944576103532688683695145460,
              13295603287437356399029521023390521175121750267486223753939941915842148692862,
              12536631341558385456008588428384822500419310393332622864437662191693700120667
            ];
            found = true;
        } else {
            found = false;
        }
    }
}
