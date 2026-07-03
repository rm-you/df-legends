// FUN_140453a30 @ 140453a30
// callees:


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140453a30(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = (char)_DAT_1410b6790;
  sVar2 = (short)DAT_141c513a4;
  if (cVar1 == '\x01') {
    if (DAT_1410b6791 != '\x02') {
      if (DAT_1410b6791 != '\x03') goto LAB_140453ad8;
      sVar2 = sVar2 + -0x38;
      goto LAB_140453ac8;
    }
    *param_1 = sVar2 + -0x38;
    sVar2 = (short)DAT_141c513a4 + -0x19;
  }
  else {
    if (cVar1 == '\x02') {
      if (DAT_1410b6791 != '\x03') {
        if (DAT_1410b6791 != '\x02') goto LAB_140453ad8;
        *param_1 = sVar2 + -1;
        sVar2 = (short)DAT_141c513a4 + -0x19;
        goto LAB_140453ad5;
      }
      sVar2 = sVar2 + -0x20;
    }
    else {
      if ((cVar1 != '\x03') || (DAT_1410b6791 != '\x03')) goto LAB_140453ad8;
      sVar2 = sVar2 + -1;
    }
LAB_140453ac8:
    *param_1 = sVar2;
    sVar2 = (short)DAT_141c513a4 + -1;
  }
LAB_140453ad5:
  *param_2 = sVar2;
LAB_140453ad8:
  if ((((int)*param_1 == DAT_141c513a4 + -1) && (DAT_141c3d260 != 0)) && (DAT_141c3d260 != 0x35)) {
    if ((int)*param_2 == DAT_141c513a4 + -0x19) {
      *param_1 = (short)DAT_141c513a4 + -0x38;
      return;
    }
    *param_1 = (short)DAT_141c513a4 + -0x20;
  }
  return;
}

