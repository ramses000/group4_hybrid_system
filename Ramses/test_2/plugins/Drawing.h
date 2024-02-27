/// do not modify this file! ///
/*used uplugins start
used uplugins end*/

#ifdef __cplusplus
#include <ValueTypes/value.h>
using namespace FlexitekMath::ValueTypes;
extern "C" {
#else
#define fxValue void
#endif

fxValue __declspec(dllexport) drawing2d_widget(const fxValue& parent, const fxValue& caption);
fxValue __declspec(dllexport) drawing2d_widget_set_image(const fxValue& widget, const fxValue& image);
fxValue __declspec(dllexport) drawing2d_widget_image(const fxValue& widget);
fxValue __declspec(dllexport) drawing2d_image(const fxValue& width, const fxValue& height);
fxValue __declspec(dllexport) drawing2d_image_load(const fxValue& data);
fxValue __declspec(dllexport) drawing2d_image_save(const fxValue& image);
fxValue __declspec(dllexport) drawing2d_set_draw_color(const fxValue& widget, const fxValue& r, const fxValue& g, const fxValue& b, const fxValue& a);
fxValue __declspec(dllexport) drawing2d_width(const fxValue& widget);
fxValue __declspec(dllexport) drawing2d_height(const fxValue& widget);
fxValue __declspec(dllexport) drawing2d_set_fill_color(const fxValue& widget, const fxValue& r, const fxValue& g, const fxValue& b, const fxValue& a);
fxValue __declspec(dllexport) drawing2d_set_draw_style(const fxValue& widget, const fxValue& width, const fxValue& style);
fxValue __declspec(dllexport) drawing2d_set_font(const fxValue& widget, const fxValue& font, const fxValue& size, const fxValue& bold, const fxValue& italic, const fxValue& underline);
fxValue __declspec(dllexport) drawing2d_set_transparent(const fxValue& widget, const fxValue& yes);
fxValue __declspec(dllexport) drawing2d_set_rotation(const fxValue& widget, const fxValue& rot);
fxValue __declspec(dllexport) drawing2d_clear(const fxValue& widget);
fxValue __declspec(dllexport) drawing2d_set_autoupdate(const fxValue& widget, const fxValue& yes);
fxValue __declspec(dllexport) drawing2d_update(const fxValue& widget);

fxValue __declspec(dllexport) draw2d_line(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2);
fxValue __declspec(dllexport) draw2d_line3d(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& z1, const fxValue& x2 , const fxValue& y2, const fxValue& z2);
fxValue __declspec(dllexport) draw2d_triangle3d(const fxValue& widget, const fxValue& p1, const fxValue& p2, const fxValue& p3);
fxValue __declspec(dllexport) draw2d_fill_triangle3d(const fxValue& widget, const fxValue& p1, const fxValue& p2, const fxValue& p3);
fxValue __declspec(dllexport) draw2d_rect3d(const fxValue& widget, const fxValue& p1, const fxValue& p2, const fxValue& p3,  const fxValue& p4);
fxValue __declspec(dllexport) draw2d_fill_rect3d(const fxValue& widget, const fxValue& p1, const fxValue& p2, const fxValue& p3,  const fxValue& p4);
fxValue __declspec(dllexport) draw2d_rect(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2);
fxValue __declspec(dllexport) draw2d_point(const fxValue& widget, const fxValue& x1, const fxValue& y1);
fxValue __declspec(dllexport) draw2d_rounded_rect(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2, const fxValue& rX, const fxValue& rY);
fxValue __declspec(dllexport) draw2d_ellipse(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2);
fxValue __declspec(dllexport) draw2d_fill_rect(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2);
fxValue __declspec(dllexport) draw2d_image(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2, const fxValue& image);
fxValue __declspec(dllexport) draw2d_text(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& text);
fxValue __declspec(dllexport) draw2d_arc(const fxValue& widget, const fxValue& x1, const fxValue& y1, const fxValue& x2 , const fxValue& y2, const fxValue& a1, const fxValue& a2);

fxValue __declspec(dllexport) drawing2d_widgetName();
fxValue __declspec(dllexport) drawing2d_widgetDescription();
fxValue __declspec(dllexport) drawing2d_widget_set_imageName();
fxValue __declspec(dllexport) drawing2d_widget_set_imageDescription();
fxValue __declspec(dllexport) drawing2d_widget_imageName();
fxValue __declspec(dllexport) drawing2d_widget_imageDescription();
fxValue __declspec(dllexport) drawing2d_imageName();
fxValue __declspec(dllexport) drawing2d_imageDescription();
fxValue __declspec(dllexport) drawing2d_image_loadName();
fxValue __declspec(dllexport) drawing2d_image_loadDescription();
fxValue __declspec(dllexport) drawing2d_image_saveName();
fxValue __declspec(dllexport) drawing2d_image_saveDescription();
fxValue __declspec(dllexport) drawing2d_widthName();
fxValue __declspec(dllexport) drawing2d_widthDescription();
fxValue __declspec(dllexport) drawing2d_heightName();
fxValue __declspec(dllexport) drawing2d_heightDescription();
fxValue __declspec(dllexport) drawing2d_set_draw_colorName();
fxValue __declspec(dllexport) drawing2d_set_draw_colorDescription();
fxValue __declspec(dllexport) drawing2d_set_fill_colorName();
fxValue __declspec(dllexport) drawing2d_set_fill_colorDescription();
fxValue __declspec(dllexport) drawing2d_set_draw_styleName();
fxValue __declspec(dllexport) drawing2d_set_draw_styleDescription();
fxValue __declspec(dllexport) drawing2d_set_fontName();
fxValue __declspec(dllexport) drawing2d_set_fontDescription();
fxValue __declspec(dllexport) drawing2d_set_transparentName();
fxValue __declspec(dllexport) drawing2d_set_transparentDescription();
fxValue __declspec(dllexport) drawing2d_set_rotationName();
fxValue __declspec(dllexport) drawing2d_set_rotationDescription();
fxValue __declspec(dllexport) drawing2d_clearName();
fxValue __declspec(dllexport) drawing2d_clearDescription();
fxValue __declspec(dllexport) drawing2d_set_autoupdateName();
fxValue __declspec(dllexport) drawing2d_set_autoupdateDescription();
fxValue __declspec(dllexport) drawing2d_updateName();
fxValue __declspec(dllexport) drawing2d_updateDescription();

fxValue __declspec(dllexport) draw2d_lineName();
fxValue __declspec(dllexport) draw2d_lineDescription();
fxValue __declspec(dllexport) draw2d_rectName();
fxValue __declspec(dllexport) draw2d_rectDescription();
fxValue __declspec(dllexport) draw2d_pointName();
fxValue __declspec(dllexport) draw2d_pointDescription();
fxValue __declspec(dllexport) draw2d_rounded_rectName();
fxValue __declspec(dllexport) draw2d_rounded_rectDescription();
fxValue __declspec(dllexport) draw2d_ellipseName();
fxValue __declspec(dllexport) draw2d_ellipseDescription();
fxValue __declspec(dllexport) draw2d_fill_rectName();
fxValue __declspec(dllexport) draw2d_fill_rectDescription();
fxValue __declspec(dllexport) draw2d_imageName();
fxValue __declspec(dllexport) draw2d_imageDescription();
fxValue __declspec(dllexport) draw2d_textName();
fxValue __declspec(dllexport) draw2d_textDescription();
fxValue __declspec(dllexport) draw2d_arcName();
fxValue __declspec(dllexport) draw2d_arcDescription();

#ifdef __cplusplus
}
#endif
