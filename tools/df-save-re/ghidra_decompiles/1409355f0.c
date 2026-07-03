// FUN_1409355f0 @ 1409355f0
// callees:


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_1409355f0(uint param_1)

{
  byte bVar1;
  char *pcVar2;
  char *unaff_RBX;
  
  if (param_1 < 0x114) {
    bVar1 = *(byte *)((longlong)&UINT_140935794 + (longlong)(int)param_1);
    pcVar2 = (char *)(ulonglong)bVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 0:
      return 1;
    case 1:
      return 2;
    case 2:
      return 3;
    case 3:
      return 4;
    case 4:
      return 5;
    case 5:
      return 6;
    case 6:
      return 7;
    case 7:
      return 8;
    case 8:
      return 9;
    case 9:
      return 10;
    case 10:
      return 0xc;
    case 0xb:
      return 0xd;
    case 0xc:
      return 0xe;
    case 0xd:
      return 0xf;
    case 0xe:
      return 0x11;
    case 0xf:
      return 0x12;
    case 0x10:
      return 0x13;
    case 0x11:
      return 0x14;
    case 0x12:
      return 0x15;
    case 0x13:
      return 0x19;
    case 0x14:
      return 0x17;
    case 0x15:
      return 0x16;
    case 0x16:
      return 0x10;
    case 0x17:
      return 0x1a;
    case 0x18:
      return 0x18;
    case 0x19:
      return 0x1b;
    case 0x1a:
      return 0x1c;
    case 0x1b:
      return 0x1d;
    case 0x1c:
      return 0x1f;
    case 0x1d:
      return 0x20;
    case 0x1e:
      return 0x22;
    case 0x1f:
      return 0x25;
    case 0x20:
      return 0x26;
    case 0x21:
      return 0x27;
    case 0x22:
      return 0x28;
    case 0x23:
      return 0x24;
    case 0x24:
      return 0x2a;
    case 0x26:
      *unaff_RBX = *unaff_RBX + bVar1;
      *pcVar2 = *pcVar2 + bVar1;
      *(char *)((longlong)pcVar2 * 2) = *(char *)((longlong)pcVar2 * 2) + bVar1;
      *pcVar2 = *pcVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}

