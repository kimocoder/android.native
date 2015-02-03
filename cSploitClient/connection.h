/* cSploit - a simple penetration testing suite
 * Copyright (C) 2014  Massimo Dragano aka tux_mind <tux_mind@csploit.org>
 * 
 * cSploit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * cSploit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with cSploit.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */
#ifndef CONNECTION_H
#define CONNECTION_H

#include <jni.h>
#include <pthread.h>

extern int sockfd;
extern pthread_mutex_t write_lock;

jboolean connect_unix(JNIEnv *, jclass, jstring);
jboolean is_unix_connected(JNIEnv *, jclass);
void disconnect_unix(JNIEnv *, jclass);
void on_disconnect(void);

#endif
