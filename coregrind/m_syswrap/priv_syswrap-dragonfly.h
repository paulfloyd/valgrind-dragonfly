
/*--------------------------------------------------------------------*/
/*--- Dragonfly-specific syscalls stuff.          priv_syswrap-dragonfly.h ---*/
/*--------------------------------------------------------------------*/

/*
   This file is part of Valgrind, a dynamic binary instrumentation
   framework.

   Copyright (C) 2000-2008 Nicholas Nethercote
      njn@valgrind.org

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307, USA.

   The GNU General Public License is contained in the file COPYING.
*/

#ifndef __PRIV_SYSWRAP_DRAGONFLY_H
#define __PRIV_SYSWRAP_DRAGONFLY_H

/* requires #include "priv_types_n_macros.h" */

// Clone-related functions
extern Word ML_(start_thread_NORETURN) ( void* arg );
extern Addr ML_(allocstack)            ( ThreadId tid );
extern void ML_(call_on_new_stack_0_1) ( Addr stack, Addr retaddr,
			                 void (*f)(Word), Word arg1 );
extern SysRes ML_(do_fork) ( ThreadId tid );
extern SysRes ML_(do_vfork) ( ThreadId tid );
extern SysRes ML_(do_rfork) ( ThreadId tid, Int flags );


DECL_TEMPLATE(dragonfly, sys_syscall);
DECL_TEMPLATE(dragonfly, sys_exit);
DECL_TEMPLATE(dragonfly, sys_getfsstat4);
DECL_TEMPLATE(dragonfly, sys_getfsstat);
DECL_TEMPLATE(dragonfly, sys_mount);
DECL_TEMPLATE(dragonfly, sys_unmount);
DECL_TEMPLATE(dragonfly, sys_ptrace);
DECL_TEMPLATE(dragonfly, sys_recvmsg);
DECL_TEMPLATE(dragonfly, sys_sendmsg);
DECL_TEMPLATE(dragonfly, sys_recvfrom);
DECL_TEMPLATE(dragonfly, sys_accept);
DECL_TEMPLATE(dragonfly, sys_getpeername);
DECL_TEMPLATE(dragonfly, sys_getsockname);
DECL_TEMPLATE(dragonfly, sys_chflags);
DECL_TEMPLATE(dragonfly, sys_fchflags);
DECL_TEMPLATE(dragonfly, sys_pipe);
DECL_TEMPLATE(dragonfly, sys_pipe2);
DECL_TEMPLATE(dragonfly, sys_wait6);
DECL_TEMPLATE(dragonfly, sys_ktrace);
DECL_TEMPLATE(dragonfly, sys_getlogin);
DECL_TEMPLATE(dragonfly, sys_setlogin);
DECL_TEMPLATE(dragonfly, sys_reboot);
DECL_TEMPLATE(dragonfly, sys_revoke);
DECL_TEMPLATE(dragonfly, sys_sbrk);
DECL_TEMPLATE(dragonfly, sys_sstk);
DECL_TEMPLATE(dragonfly, sys_swapon);
DECL_TEMPLATE(dragonfly, sys_getdtablesize);
DECL_TEMPLATE(dragonfly, sys_socket);
DECL_TEMPLATE(dragonfly, sys_connect);
DECL_TEMPLATE(dragonfly, sys_bind);
DECL_TEMPLATE(dragonfly, sys_setsockopt);
DECL_TEMPLATE(dragonfly, sys_listen);
DECL_TEMPLATE(dragonfly, sys_getsockopt);
DECL_TEMPLATE(dragonfly, sys_mkfifo);
DECL_TEMPLATE(dragonfly, sys_sendto);
DECL_TEMPLATE(dragonfly, sys_shutdown);
DECL_TEMPLATE(dragonfly, sys_socketpair);
DECL_TEMPLATE(dragonfly, sys_adjtime);
DECL_TEMPLATE(dragonfly, sys_quotactl);
DECL_TEMPLATE(dragonfly, sys_nfssvc);
DECL_TEMPLATE(dragonfly, sys_getfh);
DECL_TEMPLATE(dragonfly, sys_getdomainname);
DECL_TEMPLATE(dragonfly, sys_setdomainname);
DECL_TEMPLATE(dragonfly, sys_uname);
DECL_TEMPLATE(dragonfly, sys_sysarch);
DECL_TEMPLATE(dragonfly, sys_rtprio);
DECL_TEMPLATE(dragonfly, sys_semsys);
DECL_TEMPLATE(dragonfly, sys_msgsys);
DECL_TEMPLATE(dragonfly, sys_shmsys);
DECL_TEMPLATE(dragonfly, sys_pread);
DECL_TEMPLATE(dragonfly, sys_preadv);
DECL_TEMPLATE(dragonfly, sys_pwrite);
DECL_TEMPLATE(dragonfly, sys_pwritev);
DECL_TEMPLATE(dragonfly, sys_ntp_adjtime);
DECL_TEMPLATE(dragonfly, sys_setegid);
DECL_TEMPLATE(dragonfly, sys_seteuid);
DECL_TEMPLATE(dragonfly, sys_stat);
DECL_TEMPLATE(dragonfly, sys_fstat);
DECL_TEMPLATE(dragonfly, sys_lstat);
DECL_TEMPLATE(dragonfly, sys_statvfs);
DECL_TEMPLATE(dragonfly, sys_fstatvfs);
DECL_TEMPLATE(dragonfly, sys_pathconf);
DECL_TEMPLATE(dragonfly, sys_fpathconf);
DECL_TEMPLATE(dragonfly, sys_getdirentries);
DECL_TEMPLATE(dragonfly, sys_mmap);
DECL_TEMPLATE(dragonfly, sys___syscall);
DECL_TEMPLATE(dragonfly, sys_lseek);
DECL_TEMPLATE(dragonfly, sys_truncate);
DECL_TEMPLATE(dragonfly, sys_ftruncate);
DECL_TEMPLATE(dragonfly, sys___sysctl);
DECL_TEMPLATE(dragonfly, sys_undelete);
DECL_TEMPLATE(dragonfly, sys_futimes);
DECL_TEMPLATE(dragonfly, sys_nfs_fhopen);
DECL_TEMPLATE(dragonfly, sys___semctl7);
DECL_TEMPLATE(dragonfly, sys___semctl);
DECL_TEMPLATE(dragonfly, sys_semget);
DECL_TEMPLATE(dragonfly, sys_semop);
DECL_TEMPLATE(dragonfly, sys_msgctl);
DECL_TEMPLATE(dragonfly, sys_msgget);
DECL_TEMPLATE(dragonfly, sys_msgsnd);
DECL_TEMPLATE(dragonfly, sys_msgrcv);
DECL_TEMPLATE(dragonfly, sys_shmat);
DECL_TEMPLATE(dragonfly, sys_shmctl);
DECL_TEMPLATE(dragonfly, sys_shmctl7);
DECL_TEMPLATE(dragonfly, sys_shmdt);
DECL_TEMPLATE(dragonfly, sys_shmget);
DECL_TEMPLATE(dragonfly, sys_clock_gettime);
DECL_TEMPLATE(dragonfly, sys_clock_settime);
DECL_TEMPLATE(dragonfly, sys_clock_getres);
DECL_TEMPLATE(dragonfly, sys_minherit);
DECL_TEMPLATE(dragonfly, sys_rfork);
DECL_TEMPLATE(dragonfly, sys_issetugid);
DECL_TEMPLATE(dragonfly, sys_lchmod);
DECL_TEMPLATE(dragonfly, sys_lutimes);
DECL_TEMPLATE(dragonfly, sys_netbsd_msync);
DECL_TEMPLATE(dragonfly, sys_nstat);
DECL_TEMPLATE(dragonfly, sys_nfstat);
DECL_TEMPLATE(dragonfly, sys_nlstat);
DECL_TEMPLATE(dragonfly, sys_fhstatfs);
DECL_TEMPLATE(dragonfly, sys_fhopen);
DECL_TEMPLATE(dragonfly, sys_fhstat);
DECL_TEMPLATE(dragonfly, sys_modnext);
DECL_TEMPLATE(dragonfly, sys_modstat);
DECL_TEMPLATE(dragonfly, sys_modfnext);
DECL_TEMPLATE(dragonfly, sys_modfind);
DECL_TEMPLATE(dragonfly, sys_kldload);
DECL_TEMPLATE(dragonfly, sys_kldunload);
DECL_TEMPLATE(dragonfly, sys_kldfind);
DECL_TEMPLATE(dragonfly, sys_kldnext);
DECL_TEMPLATE(dragonfly, sys_kldstat);
DECL_TEMPLATE(dragonfly, sys_kldfirstmod);
DECL_TEMPLATE(dragonfly, sys_setresuid);
DECL_TEMPLATE(dragonfly, sys_setresgid);
DECL_TEMPLATE(dragonfly, sys_aio_return);
DECL_TEMPLATE(dragonfly, sys_aio_suspend);
DECL_TEMPLATE(dragonfly, sys_aio_cancel);
DECL_TEMPLATE(dragonfly, sys_aio_error);
DECL_TEMPLATE(dragonfly, sys_aio_read);
DECL_TEMPLATE(dragonfly, sys_aio_write);
DECL_TEMPLATE(dragonfly, sys_lio_listio);
DECL_TEMPLATE(dragonfly, sys_yield);
DECL_TEMPLATE(dragonfly, sys_thr_sleep);
DECL_TEMPLATE(dragonfly, sys_thr_wakeup);
DECL_TEMPLATE(dragonfly, sys_munlockall);
DECL_TEMPLATE(dragonfly, sys___getcwd);
DECL_TEMPLATE(dragonfly, sys_sched_setparam);
DECL_TEMPLATE(dragonfly, sys_sched_getparam);
DECL_TEMPLATE(dragonfly, sys_sched_setscheduler);
DECL_TEMPLATE(dragonfly, sys_sched_getscheduler);
DECL_TEMPLATE(dragonfly, sys_sched_yield);
DECL_TEMPLATE(dragonfly, sys_sched_get_priority_max);
DECL_TEMPLATE(dragonfly, sys_sched_get_priority_min);
DECL_TEMPLATE(dragonfly, sys_sched_rr_get_interval);
DECL_TEMPLATE(dragonfly, sys_utrace);
DECL_TEMPLATE(dragonfly, sys_kldsym);
DECL_TEMPLATE(dragonfly, sys_jail);
DECL_TEMPLATE(dragonfly, sys_sigprocmask);
DECL_TEMPLATE(dragonfly, sys_sigsuspend);
DECL_TEMPLATE(dragonfly, sys_sigaction);
DECL_TEMPLATE(dragonfly, sys_sigpending);
DECL_TEMPLATE(dragonfly, sys_sigreturn);
DECL_TEMPLATE(dragonfly, sys_fake_sigreturn);
DECL_TEMPLATE(dragonfly, sys_sigtimedwait);
DECL_TEMPLATE(dragonfly, sys_sigwaitinfo);
DECL_TEMPLATE(dragonfly, sys_getcontext);
DECL_TEMPLATE(dragonfly, sys_setcontext);
DECL_TEMPLATE(dragonfly, sys_swapcontext);
DECL_TEMPLATE(dragonfly, sys___acl_get_file);
DECL_TEMPLATE(dragonfly, sys___acl_set_file);
DECL_TEMPLATE(dragonfly, sys___acl_get_fd);
DECL_TEMPLATE(dragonfly, sys___acl_set_fd);
DECL_TEMPLATE(dragonfly, sys___acl_delete_file);
DECL_TEMPLATE(dragonfly, sys___acl_delete_fd);
DECL_TEMPLATE(dragonfly, sys___acl_aclcheck_file);
DECL_TEMPLATE(dragonfly, sys___acl_aclcheck_fd);
DECL_TEMPLATE(dragonfly, sys___acl_get_link);
DECL_TEMPLATE(dragonfly, sys___acl_set_link);
DECL_TEMPLATE(dragonfly, sys___acl_delete_link);
DECL_TEMPLATE(dragonfly, sys___acl_aclcheck_link);
DECL_TEMPLATE(dragonfly, sys_extattrctl);
DECL_TEMPLATE(dragonfly, sys_extattr_set_file);
DECL_TEMPLATE(dragonfly, sys_extattr_get_file);
DECL_TEMPLATE(dragonfly, sys_extattr_delete_file);
DECL_TEMPLATE(dragonfly, sys_aio_waitcomplete);
DECL_TEMPLATE(dragonfly, sys_getresuid);
DECL_TEMPLATE(dragonfly, sys_getresgid);
DECL_TEMPLATE(dragonfly, sys_kqueue);
DECL_TEMPLATE(dragonfly, sys_kevent);
DECL_TEMPLATE(dragonfly, sys_sendfile);
DECL_TEMPLATE(dragonfly, sys_statfs6);
DECL_TEMPLATE(dragonfly, sys_fstatfs6);
DECL_TEMPLATE(dragonfly, sys_fhstatfs6);
DECL_TEMPLATE(dragonfly, sys_thr_exit);
DECL_TEMPLATE(dragonfly, sys_thr_self);
DECL_TEMPLATE(dragonfly, sys_thr_set_name);
DECL_TEMPLATE(dragonfly, sys_rtprio_thread);
DECL_TEMPLATE(dragonfly, sys_fork);
DECL_TEMPLATE(dragonfly, sys_vfork);
DECL_TEMPLATE(dragonfly, sys_modfind);
DECL_TEMPLATE(dragonfly, sys_modstat);
DECL_TEMPLATE(dragonfly, sys_lkmnosys0);
DECL_TEMPLATE(dragonfly, sys_lkmnosys1);
DECL_TEMPLATE(dragonfly, sys_lkmnosys2);
DECL_TEMPLATE(dragonfly, sys_lkmnosys3);
DECL_TEMPLATE(dragonfly, sys_lkmnosys4);
DECL_TEMPLATE(dragonfly, sys_lkmnosys5);
DECL_TEMPLATE(dragonfly, sys_lkmnosys6);
DECL_TEMPLATE(dragonfly, sys_lkmnosys7);
DECL_TEMPLATE(dragonfly, sys_lkmnosys8);
DECL_TEMPLATE(dragonfly, sys_sigaction4);
DECL_TEMPLATE(dragonfly, sys_mmap7);
DECL_TEMPLATE(dragonfly, sys_lseek7);
DECL_TEMPLATE(dragonfly, sys_truncate7);
DECL_TEMPLATE(dragonfly, sys_ftruncate7);
DECL_TEMPLATE(dragonfly, sys_pread7);
DECL_TEMPLATE(dragonfly, sys_pwrite7);
DECL_TEMPLATE(dragonfly, sys__umtx_op);
DECL_TEMPLATE(dragonfly, sys__umtx_lock);
DECL_TEMPLATE(dragonfly, sys__umtx_unlock);
DECL_TEMPLATE(dragonfly, sys_thr_kill2);
DECL_TEMPLATE(dragonfly, sys_thr_wake);
DECL_TEMPLATE(dragonfly, sys_shm_open);
DECL_TEMPLATE(dragonfly, sys_shm_unlink);
DECL_TEMPLATE(dragonfly, sys_eaccess);
DECL_TEMPLATE(dragonfly, sys_cpuset);
DECL_TEMPLATE(dragonfly, sys_cpuset_setid);
DECL_TEMPLATE(dragonfly, sys_cpuset_getid);
DECL_TEMPLATE(dragonfly, sys_cpuset_getaffinity);
DECL_TEMPLATE(dragonfly, sys_cpuset_setaffinity);
DECL_TEMPLATE(dragonfly, sys_faccessat);
DECL_TEMPLATE(dragonfly, sys_fchmodat);
DECL_TEMPLATE(dragonfly, sys_fchownat);
DECL_TEMPLATE(dragonfly, sys_fexecve);
DECL_TEMPLATE(dragonfly, sys_fstatat);
DECL_TEMPLATE(dragonfly, sys_futimesat);
DECL_TEMPLATE(dragonfly, sys_linkat);
DECL_TEMPLATE(dragonfly, sys_mkdirat);
DECL_TEMPLATE(dragonfly, sys_mkfifoat);
DECL_TEMPLATE(dragonfly, sys_mknodat);
DECL_TEMPLATE(dragonfly, sys_openat);
DECL_TEMPLATE(dragonfly, sys_readlinkat);
DECL_TEMPLATE(dragonfly, sys_renameat);
DECL_TEMPLATE(dragonfly, sys_symlinkat);
DECL_TEMPLATE(dragonfly, sys_unlinkat);
DECL_TEMPLATE(dragonfly, sys_posix_openpt);
DECL_TEMPLATE(dragonfly, sys_kenv);
DECL_TEMPLATE(dragonfly, sys_uuidgen);
DECL_TEMPLATE(dragonfly, sys_thr_new);
DECL_TEMPLATE(dragonfly, sys_thr_kill);
DECL_TEMPLATE(dragonfly, sys_thr_kill2);
DECL_TEMPLATE(dragonfly, sys_fcntl);
DECL_TEMPLATE(dragonfly, sys_ioctl);
DECL_TEMPLATE(dragonfly, sys_mq_open);
DECL_TEMPLATE(dragonfly, sys_mq_unlink);
DECL_TEMPLATE(dragonfly, sys_mq_timedsend);
DECL_TEMPLATE(dragonfly, sys_mq_timedreceive);
DECL_TEMPLATE(dragonfly, sys_mq_notify);
DECL_TEMPLATE(dragonfly, sys_mq_getsetattr);
DECL_TEMPLATE(dragonfly, sys_mq_setattr);
DECL_TEMPLATE(dragonfly, sys_mq_getattr);
DECL_TEMPLATE(dragonfly, sys_mq_send);
DECL_TEMPLATE(dragonfly, sys_mq_receive);
DECL_TEMPLATE(dragonfly, sys_ppoll);
DECL_TEMPLATE(dragonfly, sys_procctl);

// FIXME PJF what are the syscall numbers? and what order?
DECL_TEMPLATE(dragonfly, sys_lchflags); // 391
DECL_TEMPLATE(dragonfly, sys_varsym_set); // 450
DECL_TEMPLATE(dragonfly, sys_varsym_get); // 451
DECL_TEMPLATE(dragonfly, sys_varsym_list); // 452
DECL_TEMPLATE(dragonfly, sys_umtx_sleep); // 469
DECL_TEMPLATE(dragonfly, sys_umtx_wakeup); // 470
DECL_TEMPLATE(dragonfly, sys_set_tls_area); // 472
DECL_TEMPLATE(dragonfly, sys_get_tls_area); // 473
DECL_TEMPLATE(dragonfly, sys_closefrom); // 474
DECL_TEMPLATE(dragonfly, sys_usched_set); // 481
DECL_TEMPLATE(dragonfly, sys_extaccept); // 482
DECL_TEMPLATE(dragonfly, sys_extconnect); // 483
DECL_TEMPLATE(dragonfly, sys_extexit); // 494
DECL_TEMPLATE(dragonfly, sys_lwp_create); // 495
DECL_TEMPLATE(dragonfly, sys_lwp_gettid); // 496
DECL_TEMPLATE(dragonfly, sys_lwp_kill); // 497
DECL_TEMPLATE(dragonfly, sys_lwp_rtprio); // 498
DECL_TEMPLATE(dragonfly, sys_pselect); // 499
DECL_TEMPLATE(dragonfly, sys_mq_close); // 511
DECL_TEMPLATE(dragonfly, sys_swapoff); // 529
DECL_TEMPLATE(dragonfly, sys_lpathconf); // 533
DECL_TEMPLATE(dragonfly, sys_chflagsat); // 537
DECL_TEMPLATE(dragonfly, sys_utimensat); // 539
DECL_TEMPLATE(dragonfly, sys_futimens); // 540
DECL_TEMPLATE(dragonfly, sys_accept4); // 541
DECL_TEMPLATE(dragonfly, sys_lwp_setname); // 542
DECL_TEMPLATE(dragonfly, sys_lwp_setaffinity); // 544
DECL_TEMPLATE(dragonfly, sys_lwp_getaffinity); // 545
DECL_TEMPLATE(dragonfly, sys_lwp_create2); // 546
DECL_TEMPLATE(dragonfly, sys_lwp_getname); // 549
DECL_TEMPLATE(dragonfly, sys_realpath); // 551

#endif   // __PRIV_SYSWRAP_DRAGONFLY_H

/*--------------------------------------------------------------------*/
/*--- end                                                          ---*/
/*--------------------------------------------------------------------*/
