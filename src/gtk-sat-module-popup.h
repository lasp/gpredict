#ifndef __GTK_SAT_MODULE_POPUP_H__
#define __GTK_SAT_MODULE_POPUP_H__ 1

void            gtk_sat_module_popup(GtkSatModule * module);
gboolean        module_window_config_cb(GtkWidget *, GdkEventConfigure *,
                                        gpointer);
void            gtk_sat_module_popup_rig_ctrl(GtkSatModule * module);
void            gtk_sat_module_popup_rot_ctrl(GtkSatModule * module);

#endif
