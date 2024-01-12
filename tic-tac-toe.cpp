#include <gtk-3.0/gtk/gtk.h>
#include <iostream>

GtkWidget *win, *b1, *b2, *b3, *b4, *b5, *b6, *b7, *b8, *b9, *table1, *l1, *reset;
bool toggle = 1;

std::string b1s;
std::string b2s;
std::string b3s;
std::string b4s;
std::string b5s;
std::string b6s;
std::string b7s;
std::string b8s;
std::string b9s;

static void toggle_b(bool s)
{
        gtk_widget_set_sensitive(b1, s);
        gtk_widget_set_sensitive(b2, s);
        gtk_widget_set_sensitive(b3, s);
        gtk_widget_set_sensitive(b4, s);
        gtk_widget_set_sensitive(b5, s);
        gtk_widget_set_sensitive(b6, s);
        gtk_widget_set_sensitive(b7, s);
        gtk_widget_set_sensitive(b8, s);
        gtk_widget_set_sensitive(b9, s);
}

class check
{
public:
        void chk()
        {
                b1s = (std::string)gtk_button_get_label(GTK_BUTTON(b1));
                b2s = (std::string)gtk_button_get_label(GTK_BUTTON(b2));
                b3s = (std::string)gtk_button_get_label(GTK_BUTTON(b3));
                b4s = (std::string)gtk_button_get_label(GTK_BUTTON(b4));
                b5s = (std::string)gtk_button_get_label(GTK_BUTTON(b5));
                b6s = (std::string)gtk_button_get_label(GTK_BUTTON(b6));
                b7s = (std::string)gtk_button_get_label(GTK_BUTTON(b7));
                b8s = (std::string)gtk_button_get_label(GTK_BUTTON(b8));
                b9s = (std::string)gtk_button_get_label(GTK_BUTTON(b9));
        }
        void r1()
        {
                check ck;
                ck.chk();
                if (b1s != "" && b1s == b2s && b2s == b3s) // check row1
                {
                        // std::cout << b1s.c_str() << "b1 wins\n"; 
                        // b1s != "" && b1s == b2s && b2s == b3s
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b1, "b1d");
                        gtk_widget_set_name(b2, "b1d");
                        gtk_widget_set_name(b3, "b1d");
                        toggle_b(false);
                }
                if (b4s != "" && b4s == b5s && b5s == b6s) // check row2
                {
                        // std::cout << b4s.c_str() << "b4 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b4, "b1d");
                        gtk_widget_set_name(b5, "b1d");
                        gtk_widget_set_name(b6, "b1d");
                        toggle_b(false);
                }
                if (b7s != "" && b7s == b8s && b8s == b9s) // check row3
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b7, "b1d");
                        gtk_widget_set_name(b8, "b1d");
                        gtk_widget_set_name(b9, "b1d");
                        toggle_b(false);
                }
                if (b1s != "" && b1s == b4s && b4s == b7s) // check col1
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b1, "b1d");
                        gtk_widget_set_name(b4, "b1d");
                        gtk_widget_set_name(b7, "b1d");
                        toggle_b(false);
                }
                if (b2s != "" && b2s == b5s && b5s == b8s) // check col2
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b2, "b1d");
                        gtk_widget_set_name(b5, "b1d");
                        gtk_widget_set_name(b8, "b1d");
                        toggle_b(false);
                }
                if (b3s != "" && b3s == b6s && b6s == b9s) // check col3
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b3, "b1d");
                        gtk_widget_set_name(b6, "b1d");
                        gtk_widget_set_name(b9, "b1d");
                        toggle_b(false);
                }
                if (b1s != "" && b1s == b5s && b5s == b9s) // check diag1
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b1, "b1d");
                        gtk_widget_set_name(b5, "b1d");
                        gtk_widget_set_name(b9, "b1d");
                        toggle_b(false);
                }
                if (b3s != "" && b3s == b5s && b5s == b7s) // check diag2
                {
                        // std::cout << b7s.c_str() << "b7 wins\n";
                        // gtk_widget_set_sensitive(GTK_WIDGET(table1), false);
                        gtk_widget_set_name(b3, "b1d");
                        gtk_widget_set_name(b5, "b1d");
                        gtk_widget_set_name(b7, "b1d");
                        toggle_b(false);
                }
        }
};

class buttons
{
public:
        static void resetf()
        {
                toggle_b(true);
                toggle = 1;
                gtk_button_set_label(GTK_BUTTON(b1), "");
                gtk_button_set_label(GTK_BUTTON(b2), "");
                gtk_button_set_label(GTK_BUTTON(b3), "");
                gtk_button_set_label(GTK_BUTTON(b4), "");
                gtk_button_set_label(GTK_BUTTON(b5), "");
                gtk_button_set_label(GTK_BUTTON(b6), "");
                gtk_button_set_label(GTK_BUTTON(b7), "");
                gtk_button_set_label(GTK_BUTTON(b8), "");
                gtk_button_set_label(GTK_BUTTON(b9), "");
                gtk_widget_set_name(b1, "bt");
                gtk_widget_set_name(b2, "bt");
                gtk_widget_set_name(b3, "bt");
                gtk_widget_set_name(b4, "bt");
                gtk_widget_set_name(b5, "bt");
                gtk_widget_set_name(b6, "bt");
                gtk_widget_set_name(b7, "bt");
                gtk_widget_set_name(b8, "bt");
                gtk_widget_set_name(b9, "bt");
        }
        static void b1f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b1), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b1), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b1, false);
                check ck;
                ck.r1();
        }
        static void b2f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b2), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b2), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b2, false);
                check ck;
                ck.r1();
        }
        static void b3f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b3), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b3), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b3, false);
                check ck;
                ck.r1();
        }
        static void b4f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b4), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b4), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b4, false);
                check ck;
                ck.r1();
        }
        static void b5f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b5), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b5), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b5, false);
                check ck;
                ck.r1();
        }
        static void b6f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b6), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b6), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b6, false);
                check ck;
                ck.r1();
        }
        static void b7f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b7), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b7), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b7, false);
                check ck;
                ck.r1();
        }
        static void b8f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b8), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b8), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b8, false);
                check ck;
                ck.r1();
        }
        static void b9f(GtkWidget *w, gpointer data)
        {
                if (toggle == 1)
                {
                        gtk_button_set_label(GTK_BUTTON(b9), "X");
                        toggle = 0;
                }
                else
                {
                        gtk_button_set_label(GTK_BUTTON(b9), "O");
                        toggle = 1;
                }
                gtk_widget_set_sensitive(b9, false);
                check ck;
                ck.r1();
        }
};

void addcss()
{

        // gtk_widget_set_name(temp_l, "temp_l");
        // gtk_widget_set_name((GtkWidget *)r2, "r2");
        gtk_widget_set_name(b1, "bt");
        gtk_widget_set_name(b2, "bt");
        gtk_widget_set_name(b3, "bt");
        gtk_widget_set_name(b4, "bt");
        gtk_widget_set_name(b5, "bt");
        gtk_widget_set_name(b6, "bt");
        gtk_widget_set_name(b7, "bt");
        gtk_widget_set_name(b8, "bt");
        gtk_widget_set_name(b9, "bt");
        gtk_widget_set_name(win, "win");
        gtk_widget_set_name(reset, "reset");
        GtkCssProvider *prov1 = gtk_css_provider_new();
        gtk_css_provider_load_from_path(prov1, "zc.css", NULL);
        gtk_style_context_add_provider_for_screen(gdk_screen_get_default(), GTK_STYLE_PROVIDER(prov1), GTK_STYLE_PROVIDER_PRIORITY_USER);
}

int main(int argc, char *argv[])
{
        buttons bt;
        gtk_init(&argc, &argv);
        win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        b1 = gtk_button_new_with_label("");
        b2 = gtk_button_new_with_label("");
        b3 = gtk_button_new_with_label("");
        b4 = gtk_button_new_with_label("");
        b5 = gtk_button_new_with_label("");
        b6 = gtk_button_new_with_label("");
        b7 = gtk_button_new_with_label("");
        b8 = gtk_button_new_with_label("");
        b9 = gtk_button_new_with_label("");
        reset = gtk_button_new_with_label("Reset");
        table1 = gtk_table_new(8, 8, 0);
        addcss();
        gtk_table_attach(GTK_TABLE(table1), b1, 0, 1, 0, 1, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b2, 1, 2, 0, 1, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b3, 2, 3, 0, 1, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b4, 0, 1, 1, 2, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b5, 1, 2, 1, 2, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b6, 2, 3, 1, 2, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b7, 0, 1, 2, 3, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b8, 1, 2, 2, 3, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), b9, 2, 3, 2, 3, GTK_FILL, GTK_FILL, 4, 4);
        gtk_table_attach(GTK_TABLE(table1), reset, 0, 3, 3, 4, GTK_FILL, GTK_FILL, 10, 10);
        g_signal_connect(win, "delete-event", gtk_main_quit, NULL);
        g_signal_connect(b1, "clicked", G_CALLBACK(bt.b1f), NULL);
        g_signal_connect(b2, "clicked", G_CALLBACK(bt.b2f), NULL);
        g_signal_connect(b3, "clicked", G_CALLBACK(bt.b3f), NULL);
        g_signal_connect(b4, "clicked", G_CALLBACK(bt.b4f), NULL);
        g_signal_connect(b5, "clicked", G_CALLBACK(bt.b5f), NULL);
        g_signal_connect(b6, "clicked", G_CALLBACK(bt.b6f), NULL);
        g_signal_connect(b7, "clicked", G_CALLBACK(bt.b7f), NULL);
        g_signal_connect(b8, "clicked", G_CALLBACK(bt.b8f), NULL);
        g_signal_connect(b9, "clicked", G_CALLBACK(bt.b9f), NULL);
        g_signal_connect(reset, "clicked", G_CALLBACK(bt.resetf), NULL);
        gtk_container_add(GTK_CONTAINER(win), table1);
        gtk_widget_show_all(win);
        // gtk_window_set_default_size(GTK_WINDOW(win), 200, 200);
        // gtk_window_set_resizable(GTK_WINDOW(win), false);
        gtk_window_set_title(GTK_WINDOW(win), "TIC TAC TOE");
        gtk_main();
        return 0;
}
