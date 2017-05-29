// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008 - INRIA - Serge Steer
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

// Maple code used to create reference
// Digits := 40: 
// writeto("sech.ref"): interface(prettyprint = 0): 
// for i from 0 to 400 do print(i, evalf[30](sech(i), 30)) end do: 
// writeto(terminal):
ieee(2);
pi=%pi;eps=%eps;Inf=%inf;NaN=%nan; //used to make following code runnable under Matlab

ref=[0, 1.
1, .648054273663885399574977353226
2, .265802228834079692120862739820
3, 0.993279274194332078290124480993e-1
4, 0.366189934736865327726418852256e-1
5, 0.134752822213045573055191382449e-1
6, 0.495747389356037873031287843550e-2
7, 0.182376241459820785592837971760e-2
8, 0.670925180302341288768377623371e-3
9, 0.246819604414301523167477531009e-3
10, 0.907998593378172440801295078205e-4
11, 0.334034015711735463376634028421e-4
12, 0.122884247061925149513334155015e-4
13, 0.452065881393901220322464101092e-5
14, 0.166305743820598586367511236826e-5
15, 0.611804641003594326371348012889e-6
16, 0.225070349438515378699384876286e-6
17, 0.827987543757031912835373086853e-7
18, 0.304599594894252498070161140654e-7
19, 0.112055928750745347282675251476e-7
20, 0.412230724487711563841885923492e-8
21, 0.151651208558238134471642664824e-8
22, 0.557893618573784961500372165903e-9
23, 0.205237592634037806076389278257e-9
24, 0.755026908855819550327917872273e-10
25, 0.277758877299280411893181702182e-10
26, 0.102181780561266494397485336640e-10
27, 0.375905763307816658951652755749e-11
28, 0.138288002138804060188251627061e-11
29, 0.508733129475384582060677090055e-12
30, 0.187152459376803492098316642829e-12
31, 0.688495421693995291678477865754e-13
32, 0.253283310981883514462418083079e-13
33, 0.931777229020679472836849108702e-14
34, 0.342781686308402593260544068514e-14
35, 0.126102335202939787712780423845e-14
36, 0.463904566048713877662452721948e-15
37, 0.170660952514881315885560996459e-15
38, 0.627826558409605925741792930446e-16
39, 0.230964483460315719725248841266e-16
40, 0.849670851058317799065846956572e-17
41, 0.312576437866997753618176599021e-17
42, 0.114990445285871196133287617611e-17
43, 0.423026207518216097326280201405e-18
44, 0.155622644822675930314266334586e-18
45, 0.572503716109878728894024325837e-19
46, 0.210612347151076247575266488989e-19
47, 0.774799525737437422586295499454e-20
48, 0.285032816548187021257064205607e-20
49, 0.104857713267269278743436106057e-20
50, 0.385749969592783556603468563305e-21
51, 0.141909483245694082779665387756e-21
52, 0.522055813933540960940539063066e-22
53, 0.192053601090173520604615393400e-22
54, 0.706525714440161405947078562035e-23
55, 0.259916285001500614720142681214e-23
56, 0.956178576777093816255435408464e-24
57, 0.351758440484862329791175025761e-24
58, 0.129404698512909206523080791059e-24
59, 0.476053281738880121178864917760e-25
60, 0.175130215253930406769774656015e-25
61, 0.644268057198503217800249555170e-26
62, 0.237012972846796201257006147819e-26
63, 0.871922000012616194724624963178e-27
64, 0.320762178109727570595217406828e-27
65, 0.118001810831941227828025205911e-27
66, 0.434104402260727882397313851915e-28
67, 0.159698084913739576167853885329e-28
68, 0.587496422342160589321776128479e-29
69, 0.216127855541455698907329923249e-29
70, 0.795089947181729361557819950759e-30
71, 0.292497245450246189365275746166e-30
72, 0.107603723200422768276363745409e-30
73, 0.395851975589380910749838306720e-31
74, 0.145625803566432876685939474338e-31
75, 0.535727392361615588868883040215e-32
76, 0.197083093722225160578761959472e-32
77, 0.725028183828711844848166639455e-33
78, 0.266722963100452268290602815825e-33
79, 0.981218946129856113227077470386e-34
80, 0.360970277569083034462425671470e-34
81, 0.132793543991614688014045105409e-34
82, 0.488520147548105535888160521483e-35
83, 0.179716518880987613393376963455e-35
84, 0.661140125352146859691019285147e-36
85, 0.243219859850565112883365267353e-36
86, 0.894755861236224146925531167834e-37
87, 0.329162286216454730233206855533e-37
88, 0.121092037908023717690637210676e-37
89, 0.445472712359148747844581856328e-38
90, 0.163880252479810308607222164268e-38
91, 0.602881757013074910652616491127e-39
92, 0.221787803862427275891919506870e-39
93, 0.815911733435512031540193306091e-40
94, 0.300157152541478977508993000602e-40
95, 0.110421645540570654634472841334e-40
96, 0.406218532546962185138073755543e-41
97, 0.149439446746859803211711111537e-41
98, 0.549757001582042985991265752274e-42
99, 0.202244298522089705989057159524e-42
100, 0.744015195204167192591939160773e-43
101, 0.273707894234770600049411146046e-43
102, 0.100691507175299647936043092459e-43
103, 0.370423353903595092452940480948e-44
104, 0.136271136430905970268363728104e-44
105, 0.501313495179990634620631448868e-45
106, 0.184422928458517498510297154316e-45
107, 0.678454038605203040510598796974e-46
108, 0.249589292582590249708874558899e-46
109, 0.918187694776589151606948985796e-47
110, 0.337782376044906467032769262934e-47
111, 0.124263191736962176732491084143e-47
112, 0.457138735343734346947465280756e-48
113, 0.168171942496072860486105116258e-48
114, 0.618670002261712168596549922538e-49
115, 0.227595974701573629775452415883e-49
116, 0.837278799860846310307682686460e-50
117, 0.308017656997504039693760240733e-50
118, 0.113313363527178786725848148692e-50
119, 0.416856568516350264786603164274e-51
120, 0.153352961474439992648684167506e-51
121, 0.564154017692027080223689492251e-52
122, 0.207540664763166906960116358763e-52
123, 0.763499437734234925146622643379e-53
124, 0.280875746488380766967650661486e-53
125, 0.103328412656757219605054372147e-53
126, 0.380123987053000337736764031328e-54
127, 0.139839799932918340453925154808e-54
128, 0.514441874528482965367907616722e-55
129, 0.189252589316727561172684478219e-55
130, 0.696221367980862104339244630314e-56
131, 0.256125527784416657313455445638e-56
132, 0.942233160310719235068017704214e-57
133, 0.346628208468309418992726980843e-57
134, 0.127517391625579880064383344068e-57
135, 0.469110267708582852430274040565e-58
136, 0.172576023132419164034491816609e-58
137, 0.634871709495442651002409099753e-59
138, 0.233556249704741714289541970288e-59
139, 0.859205426234782225747431947480e-60
140, 0.316084012054722592965863682511e-60
141, 0.116280809717918785756241626500e-60
142, 0.427773192979907825624522699379e-61
143, 0.157368963181572044443080295188e-61
144, 0.578928062329660056058767493002e-62
145, 0.212975732048301270185523057957e-62
146, 0.783493932890079102213071536240e-63
147, 0.288231310192817833378609279615e-63
148, 0.106034373321846471734130166552e-63
149, 0.390078660026049722405979351793e-64
150, 0.143501919463288208396653858144e-64
151, 0.527914059391837883530525364482e-65
152, 0.194208729155616932500886683700e-65
153, 0.714453987523843545391161768839e-66
154, 0.262832933672980187944225830381e-66
155, 0.966908327610667166856547756500e-67
156, 0.355705695225426111435858571955e-67
157, 0.130856812381029137056024226253e-67
158, 0.481395310122092736560760919223e-68
159, 0.177095437670268647248661711654e-68
160, 0.651497706441504252478300907789e-69
161, 0.239672612170176962907330712755e-69
162, 0.881706266292645270387452805161e-70
163, 0.324361608521097253739962201639e-70
164, 0.119325967280211401613807792750e-70
165, 0.438975701602859816446650586546e-71
166, 0.161490135793501886682574596098e-71
167, 0.594089009104138093004452415356e-72
168, 0.218553132675326231396481656955e-72
169, 0.804012043148671049566067754214e-73
170, 0.295779501128642676875416893983e-73
171, 0.108811197585173061411532337352e-73
172, 0.400294025608288600499245066753e-74
173, 0.147259942445044232389437637890e-74
174, 0.541739053336216318425020067984e-75
175, 0.199294660202073445280196585499e-75
176, 0.733164082235912653172573161314e-76
177, 0.269715992859920929342929464329e-76
178, 0.992229687283084387782239455837e-77
179, 0.365020902871416054476970016459e-77
180, 0.134283685764231864018583034230e-77
181, 0.494002072773871827693680366118e-78
182, 0.181733206469586149606952923462e-78
183, 0.668559104383256990468927208750e-79
184, 0.245949149710592556392340959828e-79
185, 0.904796357521241946452044000399e-80
186, 0.332855978378871020991145144336e-80
187, 0.122450871316592759103544854011e-80
188, 0.450471581109043399035711349907e-81
189, 0.165719233522010939360138119194e-81
190, 0.609646990194371356957368117385e-82
191, 0.224276594064557111496534584496e-82
192, 0.825067480923036880558843542697e-83
193, 0.303525363810696456044787092143e-83
194, 0.111660741220037735105269120468e-83
195, 0.410776910808165166952727467969e-84
196, 0.151116380394239207101030290935e-84
197, 0.555926095712838222145109152334e-85
198, 0.204513781423460682170720914597e-85
199, 0.752364156219212175279610779958e-86
200, 0.276779305347347506129736291396e-86
201, 0.101821416179002198066097083424e-86
202, 0.374580056832161845401992380483e-87
203, 0.137800301981382805074702439114e-87
204, 0.506938980861671024261460187993e-88
205, 0.186492428987412030517397085265e-88
206, 0.686067305585940288090052532147e-89
207, 0.252390056984952862282386739551e-89
208, 0.928491131208529417049212769642e-90
209, 0.341572798481634131491364620461e-90
210, 0.125657610224789246625135065014e-90
211, 0.462268514284343848143491182348e-91
212, 0.170059082706077317196237875692e-91
213, 0.625612403120398147004667591614e-92
214, 0.230149941249855168827428695726e-92
215, 0.846674317726370010821436658244e-93
216, 0.311474074859389201206469068003e-93
217, 0.114584908598664091451984014986e-93
218, 0.421534321419573420600946238840e-94
219, 0.155073810598415819125499376818e-94
220, 0.570484667832713011331027668844e-95
221, 0.209869580799174360009776663366e-95
222, 0.772067041032851249864192046176e-96
223, 0.284027591602054346378248826481e-96
224, 0.104487911675834397098692040537e-96
225, 0.384389545564769813696119334516e-97
226, 0.141409011214512184444875028727e-97
227, 0.520214680222009626784129461603e-98
228, 0.191376285849253469903298507365e-98
229, 0.704034010916895715196603772117e-99
230, 0.258999638501796718475622728816e-99
231, 0.952806422756465536055958948805e-100
232, 0.350517894348209565688526065177e-100
233, 0.128948327093409995944179317059e-100
234, 0.474374385111160246545101417793e-101
235, 0.174512583700740200249340468826e-101
236, 0.641995917692128586512434934252e-102
237, 0.236177099434927545090302020796e-102
238, 0.868846993576133113981434454100e-103
239, 0.319630946460275586603062779926e-103
240, 0.117585653964905383020406031530e-103
241, 0.432573446703879834255091458489e-104
242, 0.159134877839028001920426425495e-104
243, 0.585424499303073622333764273410e-105
244, 0.215365637651686149045406345544e-105
245, 0.792285904268336381291721894702e-106
246, 0.291465695710246436744733993324e-106
247, 0.107224237258531112659913743737e-106
248, 0.394455924827025703733489241843e-107
249, 0.145112225192130677101562324959e-107
250, 0.533838043108255278699055819930e-108
251, 0.196388040974721287879598445592e-108
252, 0.722471227665347841942498179669e-109
253, 0.265782311495974043721278019107e-109
254, 0.977758482263931414765877738705e-110
255, 0.359697244055892687485454402387e-110
256, 0.132325221134189705220590616147e-110
257, 0.486797284037332378613922076527e-111
258, 0.179082712815429715097445875863e-111
259, 0.658808483140061758075393766154e-112
260, 0.242362096616571500102610762129e-112
261, 0.891600326644434353049835443740e-113
262, 0.328001429914229945496419263405e-113
263, 0.120664982740280916925830247067e-113
264, 0.443901664194562766779194357898e-114
265, 0.163302296158968997751775819773e-114
266, 0.600755574529748868046269743615e-115
267, 0.221005625038632781856077329591e-115
268, 0.813034258349575486357816923006e-116
269, 0.299098588614879893296762893165e-116
270, 0.110032221634809135846232283432e-116
271, 0.404785922058658705641898904938e-117
272, 0.148912418801006372068246500382e-117
273, 0.547818174120020051875539910420e-118
274, 0.201531043758832863176121738494e-118
275, 0.741391277566969225332445470028e-119
276, 0.272742608880718320516255644385e-119
277, 0.100336398538679917494509225610e-119
278, 0.369116982235646900318111781604e-120
279, 0.135790549151738984337222694810e-120
280, 0.499545513383050087331904529035e-121
281, 0.183772524303057727559680116135e-121
282, 0.676061335432741796173714459975e-122
283, 0.248709066276616069961281402696e-122
284, 0.914949523161127309132911419501e-123
285, 0.336591119280593137807110760103e-123
286, 0.123824952864214888602816622411e-123
287, 0.455526544627675595135787511926e-124
288, 0.167578850676387379427251499113e-124
289, 0.616488139389819682534216428382e-125
290, 0.226793312207549103754580554221e-125
291, 0.834325969563336122364867558786e-126
292, 0.306931371437781887980069723825e-126
293, 0.112913741402515594119824030608e-126
294, 0.415386440877341867246676370761e-127
295, 0.152812131740150891471916777760e-127
296, 0.562164416287835338438329059454e-128
297, 0.206808731310438932051517274492e-128
298, 0.760806805038592408098356955539e-129
299, 0.279885182277027843459556743741e-129
300, 0.102964004448240275623097238421e-129
301, 0.378783404171925339932890880975e-130
302, 0.139346627051784468141337359051e-130
303, 0.512627592889358574405810417512e-131
304, 0.188585152401198871839843090550e-131
305, 0.693766004785843250483793164044e-132
306, 0.255222250144360194206137030333e-132
307, 0.938910187576252926347877428782e-133
308, 0.345405755115726013747232820961e-133
309, 0.127067676169373340795985354391e-133
310, 0.467455857001428633345551634572e-134
311, 0.171967399446003219204305594725e-134
312, 0.632632708079018641648479871174e-135
313, 0.232732567114885581908552316277e-135
314, 0.856175267326193022685399728505e-136
315, 0.314969278888770129366675890004e-136
316, 0.115870722303772920772869154706e-136
317, 0.426264565692433599215694585913e-137
318, 0.156813970218120037165306232328e-137
319, 0.576886357317171984560779035290e-138
320, 0.212224630749270225776320858681e-138
321, 0.780730785628572252119443773163e-139
322, 0.287214805122380292167071652260e-139
323, 0.105660422004585971458625807967e-139
324, 0.388702970009858546658702013230e-140
325, 0.142995831388906666223441114707e-140
326, 0.526052265411967752832493275105e-141
327, 0.193523813426725953284856193805e-141
328, 0.711934323367904100125219021923e-142
329, 0.261906001031353470917405431978e-142
330, 0.963498332988615112111197494739e-143
331, 0.354451228309467977868604865407e-143
332, 0.130395319793018396179462957558e-143
333, 0.479697573768271196397231943979e-144
334, 0.176470875369168336977587339234e-144
335, 0.649200070138448930094990124407e-145
336, 0.238827359010993752214905593141e-145
337, 0.878596753694158113086843841246e-146
338, 0.323217682764050238807619939032e-146
339, 0.118905140511967326662258011036e-146
340, 0.437427566439543672817895172260e-147
341, 0.160920608694763284171609757755e-147
342, 0.591993835995978593555709913236e-148
343, 0.217782361563139080858631083110e-148
344, 0.801176534688446049404673279806e-149
345, 0.294736375860858206928493462058e-149
346, 0.108427453244588699481352923598e-149
347, 0.398882309072619813490594965317e-150
348, 0.146740600954809914503237529523e-150
349, 0.539828502764170869087237588239e-151
350, 0.198591807925299585925622218839e-151
351, 0.730578433207856220284150672540e-152
352, 0.268764785740414045823281379356e-152
353, 0.988730391847459491164772446310e-153
354, 0.363733584022064588690221310186e-153
355, 0.133810107625322982640256801346e-153
356, 0.492259876162943718023826464727e-154
357, 0.181092288153947135898767007087e-154
358, 0.666201297665318766021477036348e-155
359, 0.245081761092807169852483605050e-155
360, 0.901605413121348368685940930561e-156
361, 0.331682095536229028227061127891e-156
362, 0.122019023952440878642543885017e-156
363, 0.448882903439087857657941702633e-157
364, 0.165134791668586145715227706232e-157
365, 0.607496948770020206059180790856e-158
366, 0.223485638026871358223085474895e-158
367, 0.822157716271686748686031335564e-159
368, 0.302454921216817352829016597877e-159
369, 0.111266947396795381429240800796e-159
370, 0.409328224291853538901245070135e-160
371, 0.150583438408185881812030430070e-160
372, 0.553965511712777262996377716313e-161
373, 0.203792522877148585480508268701e-161
374, 0.749710794309637965463773411966e-162
375, 0.275803188050827754748858792772e-162
376, 0.101462322693440732867175998689e-162
377, 0.373259025724195273308447093047e-163
378, 0.137314321795613971246193102927e-163
379, 0.505151159670060701107944815463e-164
380, 0.185834726326527962730165143288e-164
381, 0.683647752712510273145307414014e-165
382, 0.251499953225990670870048297363e-165
383, 0.925216622474213305331178297557e-166
384, 0.340368174038342913415744574924e-166
385, 0.125214453657769813508058305138e-166
386, 0.460638232382078209324219183221e-167
387, 0.169459335510919918039716604723e-167
388, 0.623406056490411707402436543104e-168
389, 0.229338271684585262400490339981e-168
390, 0.843688352265496403770409739022e-169
391, 0.310375599554285790422067407194e-169
392, 0.114180802117282019088902680443e-169
393, 0.420047696754127474184027727059e-170
394, 0.154526911947259881957942219881e-170
395, 0.568472740131066393896390823076e-171
396, 0.209129433960615258052328964122e-171
397, 0.769344192979311928205271794619e-172
398, 0.283025911781723551263195417367e-172
399, 0.104119414263298393442787763061e-172
400, 0.383033919342801139003967955731e-173
];


     
     x=ref(:,1);
     e=max(abs((ref(:,2)-sech(x))./ref(:,2)));
     if e>200*eps then pause,end
     //diff(sech(x*(1+e)), e) = -sech(x*(1+e))*tanh(x*(1+e))*x
     e=max(abs((ref(:,2)-sech(x))./(-sech(x).*tanh(x).*x)));
     if e>200*eps then pause,end
 
     x=ref(:,1);e=max(abs((ref(:,2)-sech(-x))./ref(:,2)));
     if e>200*eps then pause,end
      //diff(sech(x*(1+e)), e) = -sech(x*(1+e))*tanh(x*(1+e))*x
     e=max(abs((ref(:,2)-sech(x))./(-sech(x).*tanh(x).*x)));
     if e>200*eps then pause,end
    
     if sech(Inf)<>0 then pause,end
     if sech(-Inf)<>0 then pause,end

     if ~isnan(sech(NaN)) then pause,end

     if sech([])<>[] then pause,end

