#include "cppjieba/Jieba.hpp"

using namespace std;

const char* const DICT_PATH = "../dict/jieba.dict.utf8";
const char* const HMM_PATH = "../dict/hmm_model.utf8";
const char* const USER_DICT_PATH = "../dict/user.dict.utf8";
const char* const IDF_PATH = "../dict/idf.utf8";
const char* const STOP_WORD_PATH = "../dict/stop_words.utf8";

int main(int argc, char** argv) {
  cppjieba::Jieba jieba(DICT_PATH,
        HMM_PATH,
        USER_DICT_PATH,
        IDF_PATH,
        STOP_WORD_PATH);
  vector<string> words;
  vector<cppjieba::Word> jiebawords;
  string s;
  string result;
  string test = "EO马化腾表示，这个good idea很不错SpaceX是什么，是一个APP吗“鲜血与荣耀”（Blood and Honour）是乐坛极端新纳粹分子的集中地，1969/7/21凌晨02:56，阿姆斯特朗的左脚踏上了月球这里是1,000块钱，请查收我的身份证号是520106198811104515打开浏览器，访问127.0.0.1, 输入密码2007-06-29对于移动手机行业是一个开天辟地的日子今年银行利息为3%这是我的电话号码：81234567但是，相对现代的这些词在朝鲜语中用的是形象描述，比如香波，朝鲜语称之为“洗头发的肥皂水”，甜圈被称为“圈状面包”，至于果汁，则是“甜水”，为了方便交流，联队球员预先准备了一本“字典”：把冰球词汇翻译成韩朝队员都能理解版本的小册子，到了韩国，脱北者需要面对的是一个和朝鲜有着天壤之别的社会体制。另外，韩朝双方还于2015年启动民族语言大辞典韩朝共同编纂项目。中国国家主席习近平当地时间25日在巴黎爱丽舍宫同法国总统马克龙会谈。要充分发挥中法高级别人文交流机制的统筹协调作用，加强文化、旅游、语言、青年、地方等领域合作中方支持法方在欧洲联合自强进程中继续发挥引领作用。马克龙表示，法方高度评价中国在应对气候变化以及维和等多边议程中的重要引领作用。另外，专项整治行动还将重点查处未经卫生健康部门审查和违反《医疗广告审查证明》规定发布医疗广告截至2018年末，各地共检查定点医药机构27.20万家，查处违约违规违法机构6.63万家，其中解除医保协议1284家、行政处罚1618家、移交司法机关127家。周围所有人都是这种情况吗还是只有您的手机是这种情况呢行了,哎,我知道我说别人都正常吗刷卡到手机呢用的是什么牌子的手机能告诉我一下吗没听太清楚您说什么我们有个专门的手机专家我给您发送一个咱移动的手机上网参数设置然后手机专家是免费的让他告诉您怎么把参数核对你把参数调整好之后手机关开机刷新一下就能恢复正常好吧啊,那您放心我帮您转接专家您别挂机好吧邻近三叉神经的脑血管走行发生改变，或管径增粗，压迫三叉神经后根从而造成脱髓鞘改变。三叉神经根的原发性脱髓鞘病变（如多发性硬化）也可导致三叉神经痛，但较罕见。如牙科或外科手术不慎损伤三叉神经。这并不是指三叉神经痛一定会遗传，而指此病有多基因的共同参与，可能会在某些诱发因素下出现症状，但目前尚缺乏充分的证据支持。故精神压力可能是一个原因。原本就有三叉神经痛的患者，精神压力过大也会使症状加重。脑部的一些的原发肿瘤或转移瘤生长压迫三叉神经，神经损伤等引起的三叉神经痛称为\"继发性三叉神经痛\"。免疫因素在神经痛方面的作用已得到越来越多的重视";

  cout << "[demo] Cut With HMM" << endl;
  jieba.Cut(s, words, true);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  cout << "[demo] Cut Without HMM " << endl;
  jieba.Cut(s, words, false);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  cout << s << endl;
  cout << "[demo] CutAll" << endl;
  jieba.CutAll(s, words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  cout << s << endl;
  cout << "[demo] CutForSearch" << endl;
  jieba.CutForSearch(s, words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;


//  s = "他来到了网易杭研大厦";
//  cout << s << endl;
//  cout << "[demo] Cut With HMM" << endl;
//  jieba.Cut(s, words, true);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//
//  cout << "[demo] Cut Without HMM " << endl;
//  jieba.Cut(s, words, false);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//
//  s = "我来到北京清华大学";
//  cout << s << endl;
//  cout << "[demo] CutAll" << endl;
//  jieba.CutAll(s, words);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//
//  s = "小明硕士毕业于中国科学院计算所，后在日本京都大学深造";
//  cout << s << endl;
//  cout << "[demo] CutForSearch" << endl;
//  jieba.CutForSearch(s, words);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//
//  cout << "[demo] Insert User Word" << endl;
//  jieba.Cut("男默女泪", words);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//  jieba.InsertUserWord("男默女泪");
//  jieba.Cut("男默女泪", words);
//  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
//
//  cout << "[demo] CutForSearch Word With Offset" << endl;
//  jieba.CutForSearch(s, jiebawords, true);
//  cout << jiebawords << endl;
//
//  cout << "[demo] Lookup Tag for Single Token" << endl;
//  const int DemoTokenMaxLen = 32;
//  char DemoTokens[][DemoTokenMaxLen] = {"拖拉机", "CEO", "123", "。"};
//  vector<pair<string, string> > LookupTagres(sizeof(DemoTokens) / DemoTokenMaxLen);
//  vector<pair<string, string> >::iterator it;
//  for (it = LookupTagres.begin(); it != LookupTagres.end(); it++) {
//	it->first = DemoTokens[it - LookupTagres.begin()];
//	it->second = jieba.LookupTag(it->first);
//  }
//  cout << LookupTagres << endl;
//
//  cout << "[demo] Tagging" << endl;
//  vector<pair<string, string> > tagres;
//  s = "我是拖拉机学院手扶拖拉机专业的。不用多久，我就会升职加薪，当上CEO，走上人生巅峰。";
//  jieba.Tag(s, tagres);
//  cout << s << endl;
//  cout << tagres << endl;
//
//  cout << "[demo] Keyword Extraction" << endl;
//  const size_t topk = 5;
//  vector<cppjieba::KeywordExtractor::Word> keywordres;
//  jieba.extractor.Extract(s, keywordres, topk);
//  cout << s << endl;
//  cout << keywordres << endl;
  return EXIT_SUCCESS;
}
