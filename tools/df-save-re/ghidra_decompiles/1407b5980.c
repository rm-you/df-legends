// FUN_1407b5980 @ 1407b5980
// callees:
//   -> 140764cb0 FUN_140764cb0


void FUN_1407b5980(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    FUN_140764cb0();
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
  }
  else {
    if (*(longlong *)(param_3 + 0xa78) == 0) {
      return;
    }
    lVar6 = *(longlong *)(param_3 + 0xa78) + 0x248;
  }
  if (lVar6 == 0) {
    return;
  }
  sVar3 = *(short *)(lVar6 + 0x80);
  if (*(short **)(lVar6 + 0x158) != (short *)0x0) {
    sVar3 = sVar3 + **(short **)(lVar6 + 0x158);
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if (100 < sVar3) {
      sVar3 = 100;
    }
  }
  iVar5 = param_2[3];
  if ((0 < iVar5) && (0x3c < sVar3)) {
    if (sVar3 < 0x5b) {
      if (sVar3 < 0x4c) {
        iVar5 = (int)(iVar5 * 5 + (iVar5 * 5 >> 0x1f & 3U)) >> 2;
      }
      else {
        iVar5 = (iVar5 * 3) / 2;
      }
    }
    else {
      iVar5 = iVar5 * 2;
    }
    cVar2 = (char)iVar5;
    if (100 < iVar5) {
      cVar2 = 'd';
    }
    param_2[3] = (int)cVar2;
  }
  sVar3 = *(short *)(lVar6 + 0x82);
  if (*(longlong *)(lVar6 + 0x158) != 0) {
    sVar3 = sVar3 + *(short *)(*(longlong *)(lVar6 + 0x158) + 2);
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if (100 < sVar3) {
      sVar3 = 100;
    }
  }
  if ((param_2[3] < 0) && (0x5a < sVar3)) {
    iVar5 = param_2[3] * 2;
    cVar2 = (char)iVar5;
    if (iVar5 < -100) {
      cVar2 = -100;
    }
    param_2[3] = (int)cVar2;
  }
  iVar5 = param_2[2];
  if (0 < iVar5) {
    sVar3 = *(short *)(lVar6 + 0xa4);
    if (*(longlong *)(lVar6 + 0x158) != 0) {
      sVar3 = sVar3 + *(short *)(*(longlong *)(lVar6 + 0x158) + 0x24);
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      else if (100 < sVar3) {
        sVar3 = 100;
      }
    }
    if (sVar3 < 0x3d) {
      if (sVar3 < 0x28) {
        if (sVar3 < 10) {
          iVar5 = iVar5 * 2;
        }
        else if (sVar3 < 0x19) {
          iVar5 = (iVar5 * 3) / 2;
        }
        else {
          iVar5 = (int)((iVar5 * 5 >> 0x1f & 3U) + iVar5 * 5) >> 2;
        }
        if (100 < iVar5) {
          iVar5 = 100;
        }
      }
    }
    else if (sVar3 < 0x5b) {
      if (sVar3 < 0x4c) {
        iVar5 = iVar5 / 2;
      }
      else {
        iVar5 = (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f) +
                iVar5 / 3 + (iVar5 >> 0x1f);
      }
    }
    else {
      iVar5 = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
    }
    param_2[2] = (int)(char)iVar5;
  }
  iVar5 = *param_2;
  if (iVar5 < 1) goto LAB_1407b5be8;
  lVar1 = *(longlong *)(lVar6 + 0x158);
  sVar3 = *(short *)(lVar6 + 0xac);
  if (lVar1 != 0) {
    sVar3 = sVar3 + *(short *)(lVar1 + 0x2c);
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if (100 < sVar3) {
      sVar3 = 100;
    }
  }
  sVar4 = *(short *)(lVar6 + 0xce);
  if (lVar1 != 0) {
    sVar4 = sVar4 + *(short *)(lVar1 + 0x4e);
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    else if (100 < sVar4) {
      sVar4 = 100;
    }
  }
  if (sVar4 < sVar3) {
    sVar4 = sVar3;
  }
  if (sVar4 < 0x5b) {
    if (9 < sVar4) {
      if (sVar4 < 0x4c) {
        if (sVar4 < 0x19) {
          iVar5 = (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f) +
                  iVar5 / 3 + (iVar5 >> 0x1f);
        }
        else if (sVar4 < 0x3d) {
          if (sVar4 < 0x28) goto LAB_1407b5bd5;
        }
        else {
          iVar5 = (int)((iVar5 * 5 >> 0x1f & 3U) + iVar5 * 5) >> 2;
        }
      }
      else {
        iVar5 = iVar5 * 3;
LAB_1407b5bd5:
        iVar5 = iVar5 / 2;
      }
      goto LAB_1407b5bdc;
    }
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 * 2;
LAB_1407b5bdc:
    if (100 < iVar5) {
      iVar5 = 100;
    }
  }
  *param_2 = (int)(char)iVar5;
LAB_1407b5be8:
  sVar3 = *(short *)(lVar6 + 0xd4);
  if (*(longlong *)(lVar6 + 0x158) != 0) {
    sVar3 = sVar3 + *(short *)(*(longlong *)(lVar6 + 0x158) + 0x54);
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if (100 < sVar3) {
      sVar3 = 100;
    }
  }
  cVar2 = (char)param_2[4];
  if (0x5a < sVar3) {
    param_2[4] = (int)(char)(cVar2 + '2');
    return;
  }
  if (sVar3 < 10) {
    param_2[4] = (int)(char)(cVar2 + -0x32);
    return;
  }
  if (sVar3 < 0x4c) {
    if (sVar3 < 0x19) {
      param_2[4] = (int)(char)(cVar2 + -0x19);
      return;
    }
    if (sVar3 < 0x3d) {
      if (sVar3 < 0x28) {
        cVar2 = cVar2 + -10;
      }
      param_2[4] = (int)cVar2;
      return;
    }
    param_2[4] = (int)(char)(cVar2 + '\n');
    return;
  }
  param_2[4] = (int)(char)(cVar2 + '\x19');
  return;
}

