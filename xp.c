/* stub symbols for a fake Xp library */

void _fake(void) {
	return;
}

void     XpQueryExtension () __attribute__ ((weak, alias ("_fake")));
void  XpGetPageDimensions () __attribute__ ((weak, alias ("_fake")));
void  XpGetPdmStartParams () __attribute__ ((weak, alias ("_fake")));
void    XpGetOneAttribute () __attribute__ ((weak, alias ("_fake")));
void        XpSelectInput () __attribute__ ((weak, alias ("_fake")));
void    XpGetDocumentData () __attribute__ ((weak, alias ("_fake")));
void         XpGetContext () __attribute__ ((weak, alias ("_fake")));
void            XpEndPage () __attribute__ ((weak, alias ("_fake")));
void          XpStartPage () __attribute__ ((weak, alias ("_fake")));
void             XpEndJob () __attribute__ ((weak, alias ("_fake")));
void XpGetScreenOfContext () __attribute__ ((weak, alias ("_fake")));
void XpSetImageResolution () __attribute__ ((weak, alias ("_fake")));
