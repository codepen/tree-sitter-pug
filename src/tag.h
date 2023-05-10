#include <string>
#include <map>

using std::string;
using std::map;

enum TagType {
  AREA,
  BASE,
  BASEFONT,
  BGSOUND,
  BR,
  COL,
  COMMAND,
  EMBED,
  FRAME,
  HR,
  IMAGE,
  IMG,
  INPUT,
  ISINDEX,
  KEYGEN,
  LINK,
  MENUITEM,
  META,
  NEXTID,
  PARAM,
  SOURCE,
  TRACK,
  WBR,
  END_OF_VOID_TAGS,

  A,
  ABBR,
  ADDRESS,
  ARTICLE,
  ASIDE,
  AUDIO,
  B,
  BDI,
  BDO,
  BLOCKQUOTE,
  BODY,
  BUTTON,
  CANVAS,
  CAPTION,
  CITE,
  CODE,
  COLGROUP,
  DATA,
  DATALIST,
  DD,
  DEL,
  DETAILS,
  DFN,
  DIALOG,
  DIV,
  DL,
  DT,
  EM,
  FIELDSET,
  FIGCAPTION,
  FIGURE,
  FOOTER,
  FORM,
  H1,
  H2,
  H3,
  H4,
  H5,
  H6,
  HEAD,
  HEADER,
  HGROUP,
  HTML,
  I,
  IFRAME,
  INS,
  KBD,
  LABEL,
  LEGEND,
  LI,
  MAIN,
  MAP,
  MARK,
  MATH,
  MENU,
  METER,
  NAV,
  NOSCRIPT,
  OBJECT,
  OL,
  OPTGROUP,
  OPTION,
  OUTPUT,
  P,
  PICTURE,
  PRE,
  PROGRESS,
  Q,
  RB,
  RP,
  RT,
  RTC,
  RUBY,
  S,
  SAMP,
  SCRIPT,
  SECTION,
  SELECT,
  SLOT,
  SMALL,
  SPAN,
  STRONG,
  STYLE,
  SUB,
  SUMMARY,
  SUP,
  SVG,
  TABLE,
  TBODY,
  TD,
  TEMPLATE,
  TEXTAREA,
  TFOOT,
  TH,
  THEAD,
  TIME,
  TITLE,
  TR,
  U,
  UL,
  VAR,
  VIDEO,
};

static const map<string, TagType> get_tag_map() {
  map<string, TagType> result;
#define TAG(name) result[#name] = name
  TAG(AREA);
  TAG(BASE);
  TAG(BASEFONT);
  TAG(BGSOUND);
  TAG(BR);
  TAG(COL);
  TAG(COMMAND);
  TAG(EMBED);
  TAG(FRAME);
  TAG(HR);
  TAG(IMAGE);
  TAG(IMG);
  TAG(INPUT);
  TAG(ISINDEX);
  TAG(KEYGEN);
  TAG(LINK);
  TAG(MENUITEM);
  TAG(META);
  TAG(NEXTID);
  TAG(PARAM);
  TAG(SOURCE);
  TAG(TRACK);
  TAG(WBR);
  TAG(A);
  TAG(ABBR);
  TAG(ADDRESS);
  TAG(ARTICLE);
  TAG(ASIDE);
  TAG(AUDIO);
  TAG(B);
  TAG(BDI);
  TAG(BDO);
  TAG(BLOCKQUOTE);
  TAG(BODY);
  TAG(BUTTON);
  TAG(CANVAS);
  TAG(CAPTION);
  TAG(CITE);
  TAG(CODE);
  TAG(COLGROUP);
  TAG(DATA);
  TAG(DATALIST);
  TAG(DD);
  TAG(DEL);
  TAG(DETAILS);
  TAG(DFN);
  TAG(DIALOG);
  TAG(DIV);
  TAG(DL);
  TAG(DT);
  TAG(EM);
  TAG(FIELDSET);
  TAG(FIGCAPTION);
  TAG(FIGURE);
  TAG(FOOTER);
  TAG(FORM);
  TAG(H1);
  TAG(H2);
  TAG(H3);
  TAG(H4);
  TAG(H5);
  TAG(H6);
  TAG(HEAD);
  TAG(HEADER);
  TAG(HGROUP);
  TAG(HTML);
  TAG(I);
  TAG(IFRAME);
  TAG(INS);
  TAG(KBD);
  TAG(LABEL);
  TAG(LEGEND);
  TAG(LI);
  TAG(MAIN);
  TAG(MAP);
  TAG(MARK);
  TAG(MATH);
  TAG(MENU);
  TAG(METER);
  TAG(NAV);
  TAG(NOSCRIPT);
  TAG(OBJECT);
  TAG(OL);
  TAG(OPTGROUP);
  TAG(OPTION);
  TAG(OUTPUT);
  TAG(P);
  TAG(PICTURE);
  TAG(PRE);
  TAG(PROGRESS);
  TAG(Q);
  TAG(RB);
  TAG(RP);
  TAG(RT);
  TAG(RTC);
  TAG(RUBY);
  TAG(S);
  TAG(SAMP);
  TAG(SCRIPT);
  TAG(SECTION);
  TAG(SELECT);
  TAG(SLOT);
  TAG(SMALL);
  TAG(SPAN);
  TAG(STRONG);
  TAG(STYLE);
  TAG(SUB);
  TAG(SUMMARY);
  TAG(SUP);
  TAG(SVG);
  TAG(TABLE);
  TAG(TBODY);
  TAG(TD);
  TAG(TEMPLATE);
  TAG(TEXTAREA);
  TAG(TFOOT);
  TAG(TH);
  TAG(THEAD);
  TAG(TIME);
  TAG(TITLE);
  TAG(TR);
  TAG(U);
  TAG(UL);
  TAG(VAR);
  TAG(VIDEO);
#undef TAG
  return result;
}

static const map<string, TagType> TAG_TYPES_BY_TAG_NAME = get_tag_map();

struct Tag {
  TagType type;

  Tag(TagType type) : type(type) {}

  bool operator==(const Tag &other) const {
    if (type != other.type) return false;
    return true;
  }

  static inline Tag for_name(const string &name) {
    map<string, TagType>::const_iterator type = TAG_TYPES_BY_TAG_NAME.find(name);
    return Tag(type->second);
  }
};
