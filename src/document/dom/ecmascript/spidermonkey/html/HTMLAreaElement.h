#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLAREAELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLAREAELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLAreaElement_class;
extern const JSFunctionSpec HTMLAreaElement_funcs[];
extern const JSPropertySpec HTMLAreaElement_props[];

struct AREA_struct {
	struct HTMLElement_struct html;
	unsigned char *access_key;
	unsigned char *alt;
	unsigned char *coords;
	unsigned char *href;
	unsigned char *no_href;
	unsigned char *shape;
	unsigned char *tab_index;
	unsigned char *target;
};

#endif