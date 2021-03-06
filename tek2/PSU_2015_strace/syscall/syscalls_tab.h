/*
** head.c for  in /home/querat_g/tmp/syscall
**
** Made by querat_g
** Login   <querat_g@epitech.net>
**
** Started on  Thu Apr  7 15:30:40 2016 querat_g
** Last update Fri Apr  8 14:05:28 2016 querat_g
*/

#include <stdlib.h>
#include <stdbool.h>
#include "syscall.h"

/*
** This file was generated automatically by syscall.sh
** Some syscalls might be missing !
*/
static const t_syscall g_syscall[] =
  {
    {
      0,
      "read",
      3,
      true
    },
    {
      1,
      "write",
      3,
      true
    },
    {
      2,
      "open",
      2,
      true
    },
    {
      3,
      "close",
      1,
      true
    },
    {
      4,
      "stat",
      2,
      true
    },
    {
      5,
      "fstat",
      2,
      true
    },
    {
      6,
      "lstat",
      2,
      true
    },
    {
      7,
      "poll",
      3,
      true
    },
    {
      8,
      "lseek",
      3,
      true
    },
    {
      9,
      "mmap",
      6,
      true
    },
    {
      10,
      "mprotect",
      3,
      true
    },
    {
      11,
      "munmap",
      2,
      true
    },
    {
      12,
      "brk",
      1,
      true
    },
    {
      13,
      "sigaction",
      3,
      true
    },
    {
      14,
      "sigprocmask",
      3,
      true
    },
    {
      15,
      "sigreturn",
      1,
      true
    },
    {
      16,
      "ioctl",
      3,
      true
    },
    {
      19,
      "readv",
      3,
      true
    },
    {
      20,
      "writev",
      3,
      true
    },
    {
      21,
      "access",
      2,
      true
    },
    {
      22,
      "pipe",
      1,
      true
    },
    {
      24,
      "sched_yield",
      0,
      true
    },
    {
      25,
      "mremap",
      5,
      true
    },
    {
      26,
      "msync",
      3,
      true
    },
    {
      27,
      "mincore",
      3,
      true
    },
    {
      28,
      "madvise",
      3,
      true
    },
    {
      29,
      "shmget",
      3,
      true
    },
    {
      30,
      "shmat",
      3,
      true
    },
    {
      31,
      "shmctl",
      3,
      true
    },
    {
      32,
      "dup",
      1,
      true
    },
    {
      33,
      "dup2",
      2,
      true
    },
    {
      34,
      "pause",
      0,
      true
    },
    {
      35,
      "nanosleep",
      2,
      true
    },
    {
      36,
      "getitimer",
      2,
      true
    },
    {
      37,
      "alarm",
      1,
      true
    },
    {
      38,
      "setitimer",
      3,
      true
    },
    {
      39,
      "getpid",
      0,
      true
    },
    {
      40,
      "sendfile",
      4,
      true
    },
    {
      41,
      "socket",
      3,
      true
    },
    {
      42,
      "connect",
      3,
      true
    },
    {
      43,
      "accept",
      3,
      true
    },
    {
      44,
      "sendto",
      6,
      true
    },
    {
      45,
      "recvfrom",
      6,
      true
    },
    {
      46,
      "sendmsg",
      3,
      true
    },
    {
      47,
      "recvmsg",
      3,
      true
    },
    {
      48,
      "shutdown",
      2,
      true
    },
    {
      49,
      "bind",
      3,
      true
    },
    {
      50,
      "listen",
      2,
      true
    },
    {
      51,
      "getsockname",
      3,
      true
    },
    {
      52,
      "getpeername",
      3,
      true
    },
    {
      53,
      "socketpair",
      4,
      true
    },
    {
      54,
      "setsockopt",
      5,
      true
    },
    {
      55,
      "getsockopt",
      5,
      true
    },
    {
      56,
      "clone",
      7,
      true
    },
    {
      57,
      "fork",
      0,
      true
    },
    {
      58,
      "vfork",
      0,
      true
    },
    {
      59,
      "execve",
      3,
      true
    },
    {
      61,
      "wait4",
      4,
      true
    },
    {
      62,
      "kill",
      2,
      true
    },
    {
      63,
      "uname",
      1,
      true
    },
    {
      64,
      "semget",
      3,
      true
    },
    {
      65,
      "semop",
      3,
      true
    },
    {
      66,
      "semctl",
      4,
      true
    },
    {
      67,
      "shmdt",
      1,
      true
    },
    {
      68,
      "msgget",
      2,
      true
    },
    {
      69,
      "msgsnd",
      4,
      true
    },
    {
      70,
      "msgrcv",
      5,
      true
    },
    {
      71,
      "msgctl",
      3,
      true
    },
    {
      72,
      "fcntl",
      3,
      true
    },
    {
      73,
      "flock",
      2,
      true
    },
    {
      74,
      "fsync",
      1,
      true
    },
    {
      75,
      "fdatasync",
      1,
      true
    },
    {
      78,
      "getdents",
      3,
      true
    },
    {
      79,
      "getcwd",
      2,
      true
    },
    {
      80,
      "chdir",
      1,
      true
    },
    {
      81,
      "fchdir",
      1,
      true
    },
    {
      82,
      "rename",
      2,
      true
    },
    {
      83,
      "mkdir",
      2,
      true
    },
    {
      84,
      "rmdir",
      1,
      true
    },
    {
      85,
      "creat",
      2,
      true
    },
    {
      86,
      "link",
      2,
      true
    },
    {
      87,
      "unlink",
      1,
      true
    },
    {
      88,
      "symlink",
      2,
      true
    },
    {
      89,
      "readlink",
      3,
      true
    },
    {
      90,
      "chmod",
      2,
      true
    },
    {
      91,
      "fchmod",
      2,
      true
    },
    {
      92,
      "chown",
      3,
      true
    },
    {
      93,
      "fchown",
      3,
      true
    },
    {
      94,
      "lchown",
      3,
      true
    },
    {
      95,
      "umask",
      1,
      true
    },
    {
      96,
      "gettimeofday",
      2,
      true
    },
    {
      97,
      "getrlimit",
      2,
      true
    },
    {
      98,
      "getrusage",
      2,
      true
    },
    {
      99,
      "sysinfo",
      1,
      true
    },
    {
      100,
      "times",
      1,
      true
    },
    {
      101,
      "ptrace",
      4,
      true
    },
    {
      102,
      "getuid",
      0,
      true
    },
    {
      103,
      "syslog",
      3,
      true
    },
    {
      104,
      "getgid",
      0,
      true
    },
    {
      105,
      "setuid",
      1,
      true
    },
    {
      106,
      "setgid",
      1,
      true
    },
    {
      107,
      "geteuid",
      0,
      true
    },
    {
      108,
      "getegid",
      0,
      true
    },
    {
      109,
      "setpgid",
      2,
      true
    },
    {
      110,
      "getppid",
      0,
      true
    },
    {
      111,
      "getpgrp",
      0,
      true
    },
    {
      112,
      "setsid",
      0,
      true
    },
    {
      113,
      "setreuid",
      2,
      true
    },
    {
      114,
      "setregid",
      2,
      true
    },
    {
      115,
      "getgroups",
      2,
      true
    },
    {
      116,
      "setgroups",
      2,
      true
    },
    {
      117,
      "setresuid",
      3,
      true
    },
    {
      118,
      "getresuid",
      3,
      true
    },
    {
      119,
      "setresgid",
      3,
      true
    },
    {
      120,
      "getresgid",
      3,
      true
    },
    {
      121,
      "getpgid",
      1,
      true
    },
    {
      122,
      "setfsuid",
      1,
      true
    },
    {
      123,
      "setfsgid",
      1,
      true
    },
    {
      124,
      "getsid",
      1,
      true
    },
    {
      125,
      "capget",
      2,
      true
    },
    {
      126,
      "capset",
      2,
      true
    },
    {
      127,
      "sigpending",
      1,
      true
    },
    {
      128,
      "sigtimedwait",
      3,
      true
    },
    {
      130,
      "sigsuspend",
      1,
      true
    },
    {
      131,
      "sigaltstack",
      2,
      true
    },
    {
      132,
      "utime",
      2,
      true
    },
    {
      133,
      "mknod",
      3,
      true
    },
    {
      134,
      "uselib",
      1,
      true
    },
    {
      135,
      "personality",
      1,
      true
    },
    {
      136,
      "ustat",
      2,
      true
    },
    {
      137,
      "statfs",
      2,
      true
    },
    {
      138,
      "fstatfs",
      2,
      true
    },
    {
      139,
      "sysfs",
      2,
      true
    },
    {
      140,
      "getpriority",
      2,
      true
    },
    {
      141,
      "setpriority",
      3,
      true
    },
    {
      142,
      "sched_setparam",
      2,
      true
    },
    {
      143,
      "sched_getparam",
      2,
      true
    },
    {
      144,
      "sched_setscheduler",
      3,
      true
    },
    {
      145,
      "sched_getscheduler",
      1,
      true
    },
    {
      146,
      "sched_get_priority_max",
      1,
      true
    },
    {
      147,
      "sched_get_priority_min",
      1,
      true
    },
    {
      148,
      "sched_rr_get_interval",
      2,
      true
    },
    {
      149,
      "mlock",
      2,
      true
    },
    {
      150,
      "munlock",
      2,
      true
    },
    {
      151,
      "mlockall",
      1,
      true
    },
    {
      152,
      "munlockall",
      0,
      true
    },
    {
      153,
      "vhangup",
      0,
      true
    },
    {
      154,
      "modify_ldt",
      3,
      true
    },
    {
      155,
      "pivot_root",
      2,
      true
    },
    {
      156,
      "_sysctl",
      1,
      true
    },
    {
      157,
      "prctl",
      5,
      true
    },
    {
      158,
      "arch_prctl",
      2,
      true
    },
    {
      159,
      "adjtimex",
      1,
      true
    },
    {
      160,
      "setrlimit",
      2,
      true
    },
    {
      161,
      "chroot",
      1,
      true
    },
    {
      162,
      "sync",
      0,
      false
    },
    {
      163,
      "acct",
      1,
      true
    },
    {
      164,
      "settimeofday",
      2,
      true
    },
    {
      165,
      "mount",
      5,
      true
    },
    {
      166,
      "umount2",
      2,
      true
    },
    {
      167,
      "swapon",
      2,
      true
    },
    {
      168,
      "swapoff",
      1,
      true
    },
    {
      169,
      "reboot",
      4,
      true
    },
    {
      170,
      "sethostname",
      2,
      true
    },
    {
      171,
      "setdomainname",
      2,
      true
    },
    {
      172,
      "iopl",
      1,
      true
    },
    {
      173,
      "ioperm",
      3,
      true
    },
    {
      174,
      "create_module",
      2,
      true
    },
    {
      175,
      "init_module",
      3,
      true
    },
    {
      176,
      "delete_module",
      2,
      true
    },
    {
      177,
      "get_kernel_syms",
      1,
      true
    },
    {
      179,
      "quotactl",
      4,
      true
    },
    {
      180,
      "nfsservctl",
      3,
      true
    },
    {
      186,
      "gettid",
      0,
      true
    },
    {
      187,
      "readahead",
      3,
      true
    },
    {
      200,
      "tkill",
      2,
      true
    },
    {
      201,
      "time",
      1,
      true
    },
    {
      202,
      "futex",
      6,
      true
    },
    {
      203,
      "sched_setaffinity",
      3,
      true
    },
    {
      204,
      "sched_getaffinity",
      3,
      true
    },
    {
      205,
      "set_thread_area",
      1,
      true
    },
    {
      206,
      "io_setup",
      2,
      true
    },
    {
      207,
      "io_destroy",
      1,
      true
    },
    {
      208,
      "io_getevents",
      5,
      true
    },
    {
      209,
      "io_submit",
      3,
      true
    },
    {
      210,
      "io_cancel",
      3,
      true
    },
    {
      211,
      "get_thread_area",
      1,
      true
    },
    {
      212,
      "lookup_dcookie",
      3,
      true
    },
    {
      213,
      "epoll_create",
      1,
      true
    },
    {
      216,
      "remap_file_pages",
      5,
      true
    },
    {
      218,
      "set_tid_address",
      1,
      true
    },
    {
      219,
      "restart_syscall",
      0,
      true
    },
    {
      220,
      "semtimedop",
      4,
      true
    },
    {
      222,
      "timer_create",
      3,
      true
    },
    {
      223,
      "timer_settime",
      4,
      true
    },
    {
      224,
      "timer_gettime",
      2,
      true
    },
    {
      225,
      "timer_getoverrun",
      1,
      true
    },
    {
      226,
      "timer_delete",
      1,
      true
    },
    {
      227,
      "clock_settime",
      2,
      true
    },
    {
      228,
      "clock_gettime",
      2,
      true
    },
    {
      229,
      "clock_getres",
      2,
      true
    },
    {
      230,
      "clock_nanosleep",
      4,
      true
    },
    {
      231,
      "exit_group",
      1,
      false
    },
    {
      232,
      "epoll_wait",
      4,
      true
    },
    {
      233,
      "epoll_ctl",
      4,
      true
    },
    {
      234,
      "tgkill",
      3,
      true
    },
    {
      235,
      "utimes",
      2,
      true
    },
    {
      237,
      "mbind",
      6,
      true
    },
    {
      239,
      "get_mempolicy",
      5,
      true
    },
    {
      240,
      "mq_open",
      2,
      true
    },
    {
      241,
      "mq_unlink",
      1,
      true
    },
    {
      242,
      "mq_timedsend",
      5,
      true
    },
    {
      243,
      "mq_timedreceive",
      5,
      true
    },
    {
      244,
      "mq_notify",
      2,
      true
    },
    {
      245,
      "mq_getsetattr",
      3,
      true
    },
    {
      246,
      "kexec_load",
      4,
      true
    },
    {
      247,
      "waitid",
      4,
      true
    },
    {
      248,
      "add_key",
      5,
      true
    },
    {
      249,
      "request_key",
      4,
      true
    },
    {
      250,
      "keyctl",
      2,
      true
    },
    {
      251,
      "ioprio_set",
      3,
      true
    },
    {
      252,
      "ioprio_get",
      2,
      true
    },
    {
      253,
      "inotify_init",
      0,
      true
    },
    {
      254,
      "inotify_add_watch",
      3,
      true
    },
    {
      255,
      "inotify_rm_watch",
      2,
      true
    },
    {
      256,
      "migrate_pages",
      4,
      true
    },
    {
      257,
      "openat",
      3,
      true
    },
    {
      258,
      "mkdirat",
      3,
      true
    },
    {
      259,
      "mknodat",
      4,
      true
    },
    {
      260,
      "fchownat",
      5,
      true
    },
    {
      261,
      "futimesat",
      3,
      true
    },
    {
      263,
      "unlinkat",
      3,
      true
    },
    {
      264,
      "renameat",
      4,
      true
    },
    {
      265,
      "linkat",
      5,
      true
    },
    {
      266,
      "symlinkat",
      3,
      true
    },
    {
      267,
      "readlinkat",
      4,
      true
    },
    {
      268,
      "fchmodat",
      4,
      true
    },
    {
      269,
      "faccessat",
      4,
      true
    },
    {
      271,
      "ppoll",
      4,
      true
    },
    {
      272,
      "unshare",
      1,
      true
    },
    {
      273,
      "set_robust_list",
      2,
      true
    },
    {
      274,
      "get_robust_list",
      3,
      true
    },
    {
      275,
      "splice",
      6,
      true
    },
    {
      276,
      "tee",
      4,
      true
    },
    {
      278,
      "vmsplice",
      4,
      true
    },
    {
      279,
      "move_pages",
      6,
      true
    },
    {
      280,
      "utimensat",
      4,
      true
    },
    {
      281,
      "epoll_pwait",
      5,
      true
    },
    {
      282,
      "signalfd",
      3,
      true
    },
    {
      283,
      "timerfd_create",
      2,
      true
    },
    {
      284,
      "eventfd",
      2,
      true
    },
    {
      285,
      "fallocate",
      4,
      true
    },
    {
      286,
      "timerfd_settime",
      4,
      true
    },
    {
      287,
      "timerfd_gettime",
      2,
      true
    },
    {
      288,
      "accept4",
      4,
      true
    },
    {
      291,
      "epoll_create1",
      1,
      true
    },
    {
      292,
      "dup3",
      3,
      true
    },
    {
      293,
      "pipe2",
      2,
      true
    },
    {
      294,
      "inotify_init1",
      1,
      true
    },
    {
      295,
      "preadv",
      4,
      true
    },
    {
      296,
      "pwritev",
      4,
      true
    },
    {
      298,
      "perf_event_open",
      5,
      true
    },
    {
      299,
      "recvmmsg",
      5,
      true
    },
    {
      306,
      "syncfs",
      1,
      true
    },
    {
      307,
      "sendmmsg",
      4,
      true
    },
    {
      308,
      "setns",
      2,
      true
    },
    {
      309,
      "getcpu",
      3,
      true
    },
    {
      310,
      "process_vm_readv",
      6,
      true
    },
    {
      311,
      "process_vm_writev",
      6,
      true
    },
    {
      312,
      "kcmp",
      5,
      true
    },
    {
      313,
      "finit_module",
      3,
      true
    },
    {
      -1,
      "END",
      -1,
      -1
    }
};
