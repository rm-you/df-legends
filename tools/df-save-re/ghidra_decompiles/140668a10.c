// FUN_140668a10 @ 140668a10
// callees:
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 1406d1d50 FUN_1406d1d50
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free


void FUN_140668a10(short param_1,short param_2,short param_3,int param_4,char param_5)

{
  void *_Src;
  void *_Dst;
  short sVar1;
  void *_Memory;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short local_res8 [4];
  short local_res10 [4];
  short local_res18 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_res8[0] = param_1;
  iVar10 = (int)((longlong)DAT_141c33b20 - (longlong)DAT_141c33b18 >> 1) + -1;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (-1 < iVar10) {
    lVar6 = (longlong)iVar10;
    psVar4 = DAT_141c53440 + lVar6;
    do {
      if ((((*(short *)(((longlong)DAT_141c33b18 - (longlong)DAT_141c53440) + (longlong)psVar4) ==
             param_1) &&
           (*(short *)(((longlong)DAT_141eca1d0 - (longlong)DAT_141c53440) + (longlong)psVar4) ==
            param_2)) && (*psVar4 == param_3)) &&
         (*(short *)(((longlong)DAT_141c51318 - (longlong)DAT_141c53440) + (longlong)psVar4) ==
          param_4)) {
        *(int *)(DAT_141c3d438 + (longlong)iVar10 * 2) =
             *(int *)(DAT_141c3d438 + (longlong)iVar10 * 2) + 1;
        goto LAB_140668dde;
      }
      iVar10 = iVar10 + -1;
      psVar4 = psVar4 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  if ((local_res8 < DAT_141c33b20) && (DAT_141c33b18 <= local_res8)) {
    lVar6 = (longlong)local_res8 - (longlong)DAT_141c33b18;
    if (DAT_141c33b20 == DAT_141c33b28) {
      FUN_14000c460(&DAT_141c33b18,1);
    }
    if (DAT_141c33b20 != (short *)0x0) {
      *DAT_141c33b20 = DAT_141c33b18[lVar6 >> 1];
    }
  }
  else {
    if (DAT_141c33b20 == DAT_141c33b28) {
      FUN_14000c460(&DAT_141c33b18,1);
    }
    if (DAT_141c33b20 != (short *)0x0) {
      *DAT_141c33b20 = param_1;
    }
  }
  DAT_141c33b20 = DAT_141c33b20 + 1;
  if ((local_res10 < DAT_141eca1d8) && (DAT_141eca1d0 <= local_res10)) {
    lVar6 = (longlong)local_res10 - (longlong)DAT_141eca1d0;
    if (DAT_141eca1d8 == DAT_141eca1e0) {
      FUN_14000c460(&DAT_141eca1d0,1);
    }
    if (DAT_141eca1d8 != (short *)0x0) {
      *DAT_141eca1d8 = DAT_141eca1d0[lVar6 >> 1];
    }
  }
  else {
    if (DAT_141eca1d8 == DAT_141eca1e0) {
      FUN_14000c460(&DAT_141eca1d0,1);
    }
    if (DAT_141eca1d8 != (short *)0x0) {
      *DAT_141eca1d8 = param_2;
    }
  }
  DAT_141eca1d8 = DAT_141eca1d8 + 1;
  if ((local_res18 < DAT_141c53448) && (DAT_141c53440 <= local_res18)) {
    lVar6 = (longlong)local_res18 - (longlong)DAT_141c53440;
    if (DAT_141c53448 == DAT_141c53450) {
      FUN_14000c460(&DAT_141c53440,1);
    }
    if (DAT_141c53448 != (short *)0x0) {
      *DAT_141c53448 = DAT_141c53440[lVar6 >> 1];
    }
  }
  else {
    if (DAT_141c53448 == DAT_141c53450) {
      FUN_14000c460(&DAT_141c53440,1);
    }
    if (DAT_141c53448 != (short *)0x0) {
      *DAT_141c53448 = param_3;
    }
  }
  DAT_141c53448 = DAT_141c53448 + 1;
  local_res8[0] = (short)param_4;
  if ((local_res8 < DAT_141c51320) && (DAT_141c51318 <= local_res8)) {
    lVar6 = (longlong)local_res8 - (longlong)DAT_141c51318;
    if (DAT_141c51320 == DAT_141c51328) {
      FUN_14000c460(&DAT_141c51318,1);
    }
    if (DAT_141c51320 != (short *)0x0) {
      *DAT_141c51320 = DAT_141c51318[lVar6 >> 1];
    }
  }
  else {
    if (DAT_141c51320 == DAT_141c51328) {
      FUN_14000c460(&DAT_141c51318,1);
    }
    if (DAT_141c51320 != (short *)0x0) {
      *DAT_141c51320 = (short)param_4;
    }
  }
  DAT_141c51320 = DAT_141c51320 + 1;
  local_res8[0] = 1;
  local_res8[1] = 0;
  if ((local_res8 < DAT_141c3d440) && (DAT_141c3d438 <= local_res8)) {
    lVar6 = (longlong)local_res8 - (longlong)DAT_141c3d438;
    if (DAT_141c3d440 == DAT_141c3d448) {
      FUN_14000c390(&DAT_141c3d438,1);
    }
    if (DAT_141c3d440 != (short *)0x0) {
      *(undefined4 *)DAT_141c3d440 = *(undefined4 *)(DAT_141c3d438 + (lVar6 >> 2) * 2);
    }
  }
  else {
    if (DAT_141c3d440 == DAT_141c3d448) {
      FUN_14000c390(&DAT_141c3d438,1);
    }
    if (DAT_141c3d440 != (short *)0x0) {
      psVar4 = DAT_141c3d440;
      psVar4[0] = 1;
      psVar4[1] = 0;
    }
  }
  DAT_141c3d440 = DAT_141c3d440 + 2;
LAB_140668dde:
  lVar6 = DAT_141c53708 - DAT_141c53700 >> 3;
  if (((lVar6 != 0) && (param_5 != '\0')) && (iVar10 = (int)lVar6 + -1, -1 < iVar10)) {
    lVar6 = (longlong)iVar10 * 8;
    lVar5 = DAT_141c53700;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar5);
      if (*(short *)(lVar7 + 8) == 1) {
        sVar8 = *(short *)(lVar7 + 10);
        iVar3 = *(int *)(lVar7 + 0x10);
        sVar1 = *(short *)(lVar7 + 0xe);
        sVar9 = *(short *)(lVar7 + 0xc);
        if ((((((sVar8 != -1) || (cVar2 = FUN_1406d1d50(param_1), cVar2 != '\0')) &&
              ((sVar8 == param_1 || (sVar8 == -1)))) && ((sVar9 == local_res10[0] || (sVar9 == -1)))
             ) && ((sVar1 == param_3 || (sVar1 == -1)))) && ((iVar3 == param_4 || (iVar3 == -1)))) {
          *(short *)(lVar7 + 0x16) = *(short *)(lVar7 + 0x16) + -1;
          lVar5 = DAT_141c53700;
          if (*(short *)((longlong)*(longlong **)(lVar6 + DAT_141c53700) + 0x16) == 0) {
            lVar5 = **(longlong **)(lVar6 + DAT_141c53700);
            if (lVar5 != 0) {
              local_64 = 0xffffffff;
              local_50 = 0;
              uStack_48 = 0;
              local_60 = 0;
              local_5c = 100;
              local_40 = 0;
              local_68 = 0x52;
              lVar7 = *(longlong *)(lVar5 + 0xa78);
              if (((lVar7 != 0) && ((*(uint *)(lVar5 + 0x110) & 0x502) != 2)) &&
                 ((*(uint *)(lVar5 + 0x118) & 0x1000) == 0)) {
                cVar2 = FUN_140106f30();
                FUN_1409165e0(lVar7 + 0x248,&local_68,cVar2 != '\0');
              }
            }
            _Memory = *(void **)(lVar6 + DAT_141c53700);
            lVar5 = DAT_141c53700;
            if (_Memory != (void *)0x0) {
              iVar3 = (int)(DAT_141c53708 - DAT_141c53700 >> 3) + -1;
              if (-1 < iVar3) {
                lVar5 = (longlong)iVar3;
                do {
                  if (*(void **)(DAT_141c53700 + lVar5 * 8) == _Memory) {
                    _Dst = (void *)(DAT_141c53700 + (longlong)iVar3 * 8);
                    _Src = (void *)((longlong)_Dst + 8);
                    memmove(_Dst,_Src,DAT_141c53708 - (longlong)_Src);
                    DAT_141c53708 = DAT_141c53708 + -8;
                    break;
                  }
                  iVar3 = iVar3 + -1;
                  lVar5 = lVar5 + -1;
                } while (-1 < lVar5);
              }
              free(_Memory);
              lVar5 = DAT_141c53700;
            }
          }
        }
      }
      lVar6 = lVar6 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (0 < DAT_141c3477c) {
    DAT_141c3477c = DAT_141c3477c + -1;
  }
  if (param_1 == 0x12) {
    DAT_141c36b78 = DAT_141c36b78 | 2;
  }
  return;
}

