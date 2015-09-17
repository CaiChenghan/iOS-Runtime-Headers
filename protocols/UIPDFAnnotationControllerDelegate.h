/* Generated by RuntimeBrowser.
 */

@protocol UIPDFAnnotationControllerDelegate

@optional

- (void)annotation:(UIPDFAnnotation *)arg1 didEndTrackingAtPoint:(struct CGPoint { float x1; float x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 isBeingPressedAtPoint:(struct CGPoint { float x1; float x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 wasTouchedAtPoint:(struct CGPoint { float x1; float x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotationWasRemoved:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (UIImage *)marginNoteImage:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGSize { float x1; float x2; })marginNoteImageSize:(UIPDFAnnotationController *)arg1;
- (struct CGImage { }*)newHighlightMaskImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGImage { }*)underlineImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 controller:(UIPDFAnnotationController *)arg2;
- (BOOL)willTrackAnnotationAtPoint:(struct CGPoint { float x1; float x2; })arg1 controller:(UIPDFAnnotationController *)arg2;

@end