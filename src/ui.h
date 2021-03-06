/*
 * ui.h - Alarm Clock applet UI routines
 * 
 * Copyright (C) 2007-2008 Johannes H. Jensen <joh@pseudoberries.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 * 
 * Authors:
 * 		Johannes H. Jensen <joh@pseudoberries.com>
 */

#ifndef UI_H_
#define UI_H_

#include "alarm-applet.h"
#include "alarm-list-window.h"
#include "alarm-settings.h"

void
display_error_dialog (const gchar *message, const gchar *secondary_text, GtkWindow *parent);

void
alarm_applet_label_update (AlarmApplet *applet);

void
alarm_applet_update_tooltip (AlarmApplet *applet);

void
alarm_applet_icon_update (AlarmApplet *applet);

/*
 * Shamelessly stolen from gnome-da-capplet.c
 */
void
fill_combo_box (GtkComboBox *combo_box, GList *list, const gchar *custom_label);

void
alarm_applet_notification_show (AlarmApplet *applet, const gchar *summary,
                                const gchar *body, const gchar *icon);

void
alarm_applet_ui_init (AlarmApplet *applet);

GtkBuilder *
alarm_applet_ui_load (const char *name, AlarmApplet *applet);

void
alarm_applet_alarm_changed (GObject *object,  GParamSpec *pspec, gpointer data);

void
alarm_applet_alarm_triggered (Alarm *alarm, gpointer data);

void
alarm_applet_alarm_cleared (Alarm *alarm, gpointer data);

void
alarm_applet_status_update (AlarmApplet *applet);

void
alarm_applet_menu_init (AlarmApplet *applet);

void
media_player_error_cb (MediaPlayer *player, GError *err, gpointer data);

void
alarm_applet_status_activate (GtkStatusIcon *status_icon, gpointer user_data);

void
alarm_applet_status_popup (GtkStatusIcon  *status_icon,
                           guint           button,
                           guint           activate_time,
                           gpointer        user_data);

void
alarm_applet_status_menu_edit_cb (GtkMenuItem *menuitem, gpointer user_data);

void
alarm_applet_status_menu_prefs_cb (GtkMenuItem *menuitem, gpointer user_data);

void
alarm_applet_status_menu_about_cb (GtkMenuItem *menuitem, gpointer user_data);


#endif /*UI_H_*/
