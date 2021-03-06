/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void InitPngColors ( void );
extern ThotDrawable PngCreate ( char *fn,
                                ThotPictInfo *imageDesc,
                                int *b_w,
                                int *b_h,
                                int *wif,
                                int *hif,
                                int bgColor,
                                int *width,
                                int *height,
                                int zoom );
extern void PngPrint ( char *fn,
                       PictureScaling pres,
                       int b_w,
                       int b_h,
                       int wif,
                       int hif,
                       FILE *fd,
                       int bgColor );
extern ThotBool IsPngFormat ( char *fn );
extern ThotBool SavePng ( const char *filename,
                          unsigned char *m_pData,
                          unsigned int m_width,
                          unsigned int m_height );

#else /* __STDC__ */

extern void InitPngColors ( void );
extern ThotDrawable PngCreate ( char *fn,
                                  ThotPictInfo *imageDesc,
                                  int *b_w,
                                  int *b_h,
                                  int *wif,
                                  int *hif,
                                  int bgColor,
                                  int *width,
                                  int *height,
                                  int zoom );
extern void PngPrint ( char *fn,
                         PictureScaling pres,
                         int b_w,
                         int b_h,
                         int wif,
                         int hif,
                         FILE *fd,
                         int bgColor );
extern ThotBool IsPngFormat ( char *fn );
extern ThotBool SavePng ( const char *filename,
                            unsigned char *m_pData,
                            unsigned int m_width,
                            unsigned int m_height );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
