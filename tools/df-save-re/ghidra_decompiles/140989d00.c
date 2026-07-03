// FUN_140989d00 @ 140989d00
// callees:
//   -> 14097d5a0 FUN_14097d5a0
//   -> 140b80fb0 FUN_140b80fb0
//   -> 140dfb5b4 free
//   -> 140938150 FUN_140938150
//   -> 14095fb00 FUN_14095fb00
//   -> 1409379f0 FUN_1409379f0
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:000000e1 memmove
//   -> 140364610 FUN_140364610


void FUN_140989d00(undefined8 param_1,char param_2)

{
  void *_Src;
  void *_Dst;
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FUN_14097d5a0(&DAT_141c34700);
  FUN_140b80fb0(&DAT_141c34918);
  iVar3 = (int)(DAT_141c36a58 - DAT_141c36a50 >> 3) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      free(*(void **)(DAT_141c36a50 + lVar5 * 8));
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  uVar11 = 0;
  DAT_141c36a58 = DAT_141c36a50;
  DAT_141c36a68 = 0;
  lVar5 = DAT_141c34788;
  uVar7 = uVar11;
  uVar10 = uVar11;
  lVar6 = DAT_141c34790;
  if (DAT_141c34790 - DAT_141c34788 >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar10 + lVar5);
      if (pvVar1 != (void *)0x0) {
        FUN_140938150(pvVar1);
        free(pvVar1);
        lVar5 = DAT_141c34788;
        lVar6 = DAT_141c34790;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar6 - lVar5 >> 3));
  }
  lVar6 = DAT_141c36a00;
  uVar7 = uVar11;
  lVar4 = DAT_141c36a08;
  uVar10 = uVar11;
  DAT_141c34790 = lVar5;
  if (DAT_141c36a08 - DAT_141c36a00 >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar10 + lVar6);
      if (pvVar1 != (void *)0x0) {
        iVar3 = (int)(DAT_141c36ad8 - DAT_141c36ad0 >> 3) + -1;
        lVar6 = (longlong)iVar3;
        lVar5 = DAT_141c36ad0;
        if (-1 < iVar3) {
          do {
            lVar4 = *(longlong *)(lVar5 + lVar6 * 8);
            if ((*(void **)(lVar4 + 8) == pvVar1) && (lVar4 != 0)) {
              FUN_14095fb00();
              lVar5 = DAT_141c36ad0;
            }
            lVar6 = lVar6 + -1;
          } while (-1 < lVar6);
        }
        free(pvVar1);
        lVar6 = DAT_141c36a00;
        lVar4 = DAT_141c36a08;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar4 - lVar6 >> 3));
  }
  lVar5 = DAT_141c36a18;
  uVar7 = uVar11;
  uVar10 = uVar11;
  lVar4 = DAT_141c36a20;
  DAT_141c36a08 = lVar6;
  if (DAT_141c36a20 - DAT_141c36a18 >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar10 + lVar5);
      if (pvVar1 != (void *)0x0) {
        FUN_1409379f0(pvVar1);
        free(pvVar1);
        lVar5 = DAT_141c36a18;
        lVar4 = DAT_141c36a20;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar4 - lVar5 >> 3));
  }
  lVar6 = DAT_141c36a70;
  uVar7 = uVar11;
  uVar10 = uVar11;
  lVar4 = DAT_141c36a78;
  DAT_141c36a20 = lVar5;
  if (DAT_141c36a78 - DAT_141c36a70 >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar10 + lVar6);
      if (pvVar1 != (void *)0x0) {
        lVar5 = *(longlong *)((longlong)pvVar1 + 0x18);
        if (lVar5 != 0) {
          FUN_140002020(lVar5,*(longlong *)((longlong)pvVar1 + 0x28) - lVar5 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
        }
        free(pvVar1);
        lVar6 = DAT_141c36a70;
        lVar4 = DAT_141c36a78;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar4 - lVar6 >> 3));
  }
  lVar5 = DAT_141c36a88;
  uVar7 = uVar11;
  uVar10 = uVar11;
  lVar4 = DAT_141c36a90;
  DAT_141c36a78 = lVar6;
  if (DAT_141c36a90 - DAT_141c36a88 >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar10 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          FUN_140002020(lVar5,plVar2[2] - lVar5 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
        lVar5 = DAT_141c36a88;
        lVar4 = DAT_141c36a90;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar4 - lVar5 >> 3));
  }
  lVar6 = DAT_141c36aa0;
  uVar7 = uVar11;
  uVar10 = uVar11;
  lVar4 = DAT_141c36aa8;
  DAT_141c36a90 = lVar5;
  if (DAT_141c36aa8 - DAT_141c36aa0 >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar10 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          FUN_140002020(lVar5,plVar2[2] - lVar5 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
        lVar6 = DAT_141c36aa0;
        lVar4 = DAT_141c36aa8;
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lVar4 - lVar6 >> 3));
  }
  uVar7 = uVar11;
  uVar10 = uVar11;
  DAT_141c36aa8 = lVar6;
  if (DAT_141c3d240 - DAT_141c3d238 >> 3 != 0) {
    do {
      free(*(void **)(uVar7 + DAT_141c3d238));
      uVar9 = (int)uVar10 + 1;
      uVar7 = uVar7 + 8;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(DAT_141c3d240 - DAT_141c3d238 >> 3));
  }
  DAT_141c3d240 = DAT_141c3d238;
  uVar7 = (ulonglong)((longlong)DAT_141c3ce38 + (7 - (longlong)DAT_141c3ce30)) >> 3;
  if (DAT_141c3ce38 < DAT_141c3ce30) {
    uVar7 = uVar11;
  }
  puVar8 = DAT_141c3ce30;
  uVar10 = uVar11;
  if (uVar7 != 0) {
    do {
      free((void *)*puVar8);
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar10 < uVar7);
  }
  DAT_141c3ce38 = DAT_141c3ce30;
  uVar7 = (ulonglong)((longlong)DAT_141c3ce50 + (7 - (longlong)DAT_141c3ce48)) >> 3;
  if (DAT_141c3ce50 < DAT_141c3ce48) {
    uVar7 = uVar11;
  }
  puVar8 = DAT_141c3ce48;
  if (uVar7 != 0) {
    do {
      free((void *)*puVar8);
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < uVar7);
  }
  lVar4 = DAT_141c36ad8 - DAT_141c36ad0;
  DAT_141c3ce68 = DAT_141c3ce60;
  DAT_141c3ce80 = DAT_141c3ce78;
  DAT_141c3ce98 = DAT_141c3ce90;
  DAT_141c3ce50 = DAT_141c3ce48;
  lVar5 = DAT_141c36ad0;
  lVar6 = DAT_141c36ad8;
  do {
    if (lVar4 >> 3 == 0) {
      if (param_2 != '\0') {
        lVar4 = DAT_141c36ac0 - DAT_141c36ab8;
        lVar5 = DAT_141c36ab8;
        lVar6 = DAT_141c36ac0;
        while (lVar4 >> 3 != 0) {
          pvVar1 = *(void **)(lVar5 + (longlong)((int)(lVar4 >> 3) + -1) * 8);
          if (pvVar1 != (void *)0x0) {
            FUN_140364610(pvVar1);
            free(pvVar1);
            lVar5 = DAT_141c36ab8;
            lVar6 = DAT_141c36ac0;
          }
          lVar4 = lVar6 - lVar5;
        }
      }
      return;
    }
    pvVar1 = *(void **)(lVar5 + (longlong)((int)(lVar6 - lVar5 >> 3) + -1) * 8);
    if (pvVar1 != (void *)0x0) {
      iVar3 = (int)(lVar6 - lVar5 >> 3) + -1;
      if (-1 < iVar3) {
        lVar4 = (longlong)iVar3;
        do {
          if (*(void **)(lVar5 + lVar4 * 8) == pvVar1) {
            _Dst = (void *)(lVar5 + (longlong)iVar3 * 8);
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,lVar6 - (longlong)_Src);
            DAT_141c36ad8 = DAT_141c36ad8 + -8;
            break;
          }
          iVar3 = iVar3 + -1;
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      free(pvVar1);
      lVar5 = DAT_141c36ad0;
      lVar6 = DAT_141c36ad8;
    }
    lVar4 = lVar6 - lVar5;
  } while( true );
}

