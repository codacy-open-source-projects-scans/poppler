#ifndef __POPPLER_AUTOCLEANUPS_H__
#define __POPPLER_AUTOCLEANUPS_H__

G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerAction, poppler_action_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerDest, poppler_dest_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerIndexIter, poppler_index_iter_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerFontInfo, poppler_font_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerFontsIter, poppler_fonts_iter_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerLayersIter, poppler_layers_iter_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerPSFile, poppler_ps_file_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerSignatureInfo, poppler_signature_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerSigningData, poppler_signing_data_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerCertificateInfo, poppler_certificate_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerRectangle, poppler_rectangle_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerPoint, poppler_point_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerQuadrilateral, poppler_quadrilateral_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerColor, poppler_color_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerTextAttributes, poppler_text_attributes_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerLinkMapping, poppler_link_mapping_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerPageTransition, poppler_page_transition_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerImageMapping, poppler_image_mapping_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerFormFieldMapping, poppler_form_field_mapping_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerAnnotMapping, poppler_annot_mapping_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerTextSpan, poppler_text_span_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PopplerStructureElementIter, poppler_structure_element_iter_free)

#endif /* __POPPLER_AUTOCLEANUPS_H__ */
