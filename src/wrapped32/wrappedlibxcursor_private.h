#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

//GO(XcursorAnimateCreate, pFp)
//GO(XcursorAnimateDestroy, vFp)
//GO(XcursorAnimateNext, LFp)
//GO(XcursorCommentCreate, pFui)
//GO(XcursorCommentDestroy, vFp)
//GO(XcursorCommentsCreate, pFi)
//GO(XcursorCommentsDestroy, vFp)
//GO(_XcursorCreateFontCursor, 
//GO(_XcursorCreateGlyphCursor, 
//GO(XcursorCursorsCreate, pFpi)
//GO(XcursorCursorsDestroy, vFp)
//GO(XcursorFileLoad, iFSpp)
//GO(XcursorFileLoadAllImages, pFS)
//GO(XcursorFileLoadImage, pFSi)
//GO(XcursorFileLoadImages, pFSi)
//GO(XcursorFilenameLoad, iFppp)
//GO(XcursorFilenameLoadAllImages, pFp)
//GO(XcursorFilenameLoadCursor, LFpp)
//GO(XcursorFilenameLoadCursors, pFpp)
//GO(XcursorFilenameLoadImage, pFpi)
//GO(XcursorFilenameLoadImages, pFpi)
//GO(XcursorFilenameSave, iFppp)
//GO(XcursorFilenameSaveImages, iFpp)
//GO(XcursorFileSave, iFSpp)
//GO(XcursorFileSaveImages, iFSp)
//GO(XcursorGetDefaultSize, iFp)
//GO(_XcursorGetDisplayInfo, 
//GO(XcursorGetTheme, pFp)
//GO(XcursorGetThemeCore, iFp)
GO(XcursorImageCreate, pFii)
GO(XcursorImageDestroy, vFp)
//GOM(XcursorImageHash, vFEpp)    // needs unbridge XImage (first p)
GO(XcursorImageLoadCursor, LFXp)
GO(XcursorImagesCreate, pFi)
GO(XcursorImagesDestroy, vFp)
GO(XcursorImagesLoadCursor, LFXp)
//GO(XcursorImagesLoadCursors, pFpp)
//GO(XcursorImagesSetName, vFpp)
GO(XcursorLibraryLoadCursor, LFXp)
//GO(XcursorLibraryLoadCursors, pFpp)
//GO(XcursorLibraryLoadImage, pFppi)
//GO(XcursorLibraryLoadImages, pFppi)
//GO(XcursorLibraryPath, pFv)
//GO(XcursorLibraryShape, iFp)
//GO(XcursorNoticeCreateBitmap, vFpLuu)
//GOM(XcursorNoticePutBitmap, vFEpLp)   //needs unbridge XImage (last p)
//GO(XcursorSetDefaultSize, iFpi)
//GO(XcursorSetTheme, iFpp)
//GO(XcursorSetThemeCore, iFpi)
//GO(XcursorShapeLoadCursor, LFpu)
//GO(XcursorShapeLoadCursors, pFpu)
//GO(XcursorShapeLoadImage, pFupi)
//GO(XcursorShapeLoadImages, pFupi)
//GO(XcursorSupportsAnim, iFp)
//GO(XcursorSupportsARGB, iFp)
//GO(XcursorTryShapeBitmapCursor, LFpLLppuu)
//GO(XcursorTryShapeCursor, LFpLLuupp)
//GO(XcursorXcFileLoad, iFppp)
//GO(XcursorXcFileLoadAllImages, pFp)
//GO(XcursorXcFileLoadImage, pFpi)
//GO(XcursorXcFileLoadImages, pFpi)
//GO(XcursorXcFileSave, iFppp)
