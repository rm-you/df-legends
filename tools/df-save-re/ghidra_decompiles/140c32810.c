// FUN_140c32810 @ 140c32810
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140da8a00 FUN_140da8a00
//   -> 1402b6050 FUN_1402b6050
//   -> 140168dc0 FUN_140168dc0
//   -> 140c8e760 FUN_140c8e760
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 140c323c0 FUN_140c323c0
//   -> 14078e1d0 FUN_14078e1d0
//   -> 140c32660 FUN_140c32660
//   -> 14073eb00 FUN_14073eb00
//   -> 140740270 FUN_140740270
//   -> 140004650 FUN_140004650
//   -> 140c88550 FUN_140c88550
//   -> EXTERNAL:0000006e GetTickCount
//   -> 140ca65e0 FUN_140ca65e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c32810(longlong param_1,short param_2,char param_3,char param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  DWORD DVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  short sVar17;
  ulonglong uVar18;
  undefined4 local_res20 [2];
  char local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  lVar9 = DAT_141d6dd50;
  uVar16 = (undefined1)param_2;
  if (param_4 == '\0') {
    if (*(char *)(param_1 + 0x880) != '\0') {
      if ((param_2 != 0) && (*(char *)(param_1 + 0x882) == '\0')) {
        cVar4 = *(char *)(param_1 + 0x881);
        if (cVar4 == param_2) {
          _DAT_141271228 = CONCAT11(uVar16,cVar4);
          DAT_14127122a = 1;
          return;
        }
        _DAT_141271228 = CONCAT11(uVar16,cVar4);
        DAT_14127122a = *(undefined1 *)(param_1 + 0x883);
        return;
      }
      _DAT_141271228 = *(undefined2 *)(param_1 + 0x881);
      DAT_14127122a = *(undefined1 *)(param_1 + 0x883);
      return;
    }
    if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
      _DAT_141271228 = 7;
      DAT_14127122a = 1;
      return;
    }
    if ((*(longlong *)(param_1 + 0xd60) != 0) &&
       (0 < *(short *)(*(longlong *)(param_1 + 0xd60) + 0x18))) {
      uVar1 = *(ushort *)(param_1 + 0xa4);
      uVar18 = (ulonglong)uVar1;
      sVar5 = *(short *)(param_1 + 300);
      if ((short)uVar1 < 0) {
LAB_140c32a0e:
        FUN_1402b6050(&DAT_141d6dd30,uVar18 & 0xffff,sVar5,param_2);
        return;
      }
      uVar14 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
      if ((uVar14 <= (ulonglong)(longlong)(short)uVar1) || (sVar5 < 0)) goto LAB_140c32a0e;
      lVar11 = *(longlong *)(DAT_141d6dd50 + (longlong)(short)uVar1 * 8);
      if (((ulonglong)(*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar5) ||
         (cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar11 + 0x178) + (longlong)sVar5 * 8) +
                                0x6a8,0x45), cVar4 == '\0')) goto LAB_140c32a0e;
      sVar17 = (short)uVar18;
      if (((-1 < sVar17) && ((ulonglong)(longlong)sVar17 < uVar14)) && (-1 < sVar5)) {
        lVar9 = *(longlong *)(lVar9 + (longlong)sVar17 * 8);
        if (((ulonglong)(longlong)sVar5 <
             (ulonglong)(*(longlong *)(lVar9 + 0x180) - *(longlong *)(lVar9 + 0x178) >> 3)) &&
           (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x178) + (longlong)sVar5 * 8), lVar9 != 0))
        {
          uVar15 = *(undefined2 *)(lVar9 + 0x3c3e);
          local_res20[0] = *(undefined4 *)(lVar9 + 0x3c40);
          uVar2 = *(undefined2 *)(lVar9 + 0x3c3c);
          goto LAB_140c329f5;
        }
      }
      uVar15 = 0xffff;
      uVar2 = (undefined2)local_res20[0];
LAB_140c329f5:
      FUN_140da8a00(&DAT_141c53470,uVar15,local_res20[0],uVar2,param_2);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x2010002) == 0) {
    sVar5 = *(short *)(param_1 + 0xac);
    uVar15 = *(undefined2 *)(param_1 + 0xaa);
    uVar2 = *(undefined2 *)(param_1 + 0xa8);
    cVar4 = FUN_140168dc0(&DAT_141c53470,uVar2,uVar15,sVar5);
    if (cVar4 == '\a') {
      sVar17 = *(short *)(param_1 + 0xa4);
      sVar3 = *(short *)(param_1 + 300);
      if (((-1 < sVar17) &&
          ((ulonglong)(longlong)sVar17 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
         (-1 < sVar3)) {
        lVar9 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar17 * 8);
        if (((ulonglong)(longlong)sVar3 <
             (ulonglong)(*(longlong *)(lVar9 + 0x180) - *(longlong *)(lVar9 + 0x178) >> 3)) &&
           (cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar9 + 0x178) + (longlong)sVar3 * 8)
                                  + 0x6a8,0x3e), cVar4 != '\0')) {
          _DAT_141271228 = 0x101;
          DAT_14127122a = 1;
          return;
        }
      }
      if (((*(byte *)(param_1 + 0x114) & 1) == 0) ||
         (cVar4 = FUN_140168dc0(&DAT_141c53470,uVar2,uVar15,sVar5 + 1), '\0' < cVar4)) {
        _DAT_141271228 = 0x101;
        DAT_14127122a = 1;
        return;
      }
    }
  }
  cVar4 = FUN_140c8e760(param_1);
  if (cVar4 != '\0') {
    uVar6 = FUN_1409fc0c0();
    _DAT_141271228 =
         CONCAT11(uVar16,((byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                         0x7fffffff >> 0x1e) + 2) * '\x02');
    DAT_14127122a = 1;
    return;
  }
  if ((DAT_1410b67dc == 1) && (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0)) {
    if (param_1 == *DAT_141c66fe8) {
LAB_140c32d02:
      FUN_140c32660(param_1,local_48,local_res20);
      if ((param_2 == local_48[0]) && ((char)local_res20[0] == '\0')) {
        local_res20[0]._0_1_ = '\x01';
      }
      _DAT_141271228 = CONCAT11(uVar16,local_48[0]);
      DAT_14127122a = (char)local_res20[0];
      return;
    }
    if (*(int *)(param_1 + 0x3b8) == *(int *)(*DAT_141c66fe8 + 0x130)) {
      for (piVar8 = DAT_141ec9298; piVar8 < DAT_141ec92a0; piVar8 = piVar8 + 1) {
        if (*piVar8 == *(int *)(param_1 + 0xc10)) {
          if ((int)((longlong)piVar8 - (longlong)DAT_141ec9298 >> 2) != -1) goto LAB_140c32d02;
          break;
        }
      }
    }
  }
  sVar5 = *(short *)(param_1 + 0xa0);
  lVar9 = 0;
  lVar11 = 0;
  if ((((param_4 == '\0') && (lVar9 = FUN_140ca8390(param_1), lVar9 != 0)) &&
      (lVar10 = FUN_140ca8390(param_1), lVar10 != 0)) &&
     ((lVar11 = FUN_1407ad250(lVar10), lVar11 != 0 && (*(short *)(lVar11 + 0xac) != -1)))) {
    sVar5 = *(short *)(lVar11 + 0xac);
  }
  FUN_140c323c0(sVar5,*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300),param_2);
  if ((lVar11 == 0) || (*(short *)(lVar11 + 0xac) == -1)) {
    lVar10 = FUN_140ca8390(param_1);
    if ((lVar10 != 0) &&
       (((lVar10 = FUN_14078e1d0(lVar10,0xffffffff,local_38,local_40), lVar10 != 0 &&
         (2 < *(int *)(lVar10 + 0x30))) &&
        ((*(byte *)(*(longlong *)(lVar10 + 0x28) + 2) & 0x10) != 0)))) {
      sVar5 = *(short *)(lVar10 + 0x354);
      if ((((sVar5 == 0) && (sVar5 = param_2, *(short *)(lVar10 + 0x356) == 0)) &&
          (param_2 == *(short *)(lVar10 + 0x352))) && (param_2 != 0)) {
        _DAT_141271228 = param_2 << 8;
        DAT_14127122a = '\0';
      }
      else {
        DAT_14127122a = (char)*(short *)(lVar10 + 0x356);
        _DAT_141271228 = CONCAT11((char)sVar5,(char)*(short *)(lVar10 + 0x352));
      }
    }
    lVar10 = FUN_140ca8390(param_1);
    if ((lVar10 != 0) && (sVar5 = FUN_14073eb00(lVar10,4,0xffffffff), 0 < sVar5)) {
      DAT_14127122a = '\0';
      if (param_2 == 7) {
        _DAT_141271228 = 0x700;
      }
      else {
        _DAT_141271228 = CONCAT11(uVar16,7);
      }
    }
    lVar10 = FUN_140ca8390(param_1);
    if (((lVar10 != 0) && (sVar5 = FUN_14073eb00(lVar10,6,0xffffffff), 0 < sVar5)) ||
       ((lVar10 = FUN_140ca8390(param_1), lVar10 != 0 &&
        (sVar5 = FUN_140740270(lVar10,7,0xffffffff), 0 < sVar5)))) {
      DAT_14127122a = '\0';
      if (param_2 == 7) {
        _DAT_141271228 = 0x700;
      }
      else {
        _DAT_141271228 = CONCAT11(uVar16,7);
      }
    }
  }
  if ((param_4 == '\0') && (lVar9 != 0)) {
    if (lVar11 == 0) {
      if (*(int *)(lVar9 + 0xd0) < 1) goto LAB_140c32ea9;
      pbVar12 = *(byte **)(lVar9 + 200);
    }
    else {
      if (((*(int *)(lVar11 + 0x88) == -1) || (lVar9 = FUN_140004650(&DAT_141d7a048), lVar9 == 0))
         || (*(int *)(lVar9 + 0xd0) < 1)) goto LAB_140c32ea9;
      pbVar12 = *(byte **)(lVar9 + 200);
    }
    if ((*pbVar12 & 4) != 0) {
      DAT_14127122a = '\x01';
      _DAT_141271228 = CONCAT11(uVar16,6);
    }
  }
LAB_140c32ea9:
  if (((DAT_1410b67dc == 0) && (cVar4 = FUN_140c88550(param_1), cVar4 != '\0')) &&
     ((param_3 != '\0' && (lVar9 = *(longlong *)(param_1 + 0xa78), lVar9 != 0)))) {
    for (puVar13 = *(undefined8 **)(lVar9 + 0x218); puVar13 < *(undefined8 **)(lVar9 + 0x220);
        puVar13 = puVar13 + 1) {
      if ((0xe < *(int *)((short *)*puVar13 + 2)) && (*(short *)*puVar13 != 0x74)) {
        DVar7 = GetTickCount();
        if ((DVar7 % 1000 < 0x14d) &&
           ((DAT_14127122a = '\x01' - DAT_14127122a, DAT_14127122a == '\0' &&
            (DAT_141271229 == '\0')))) {
          if (DAT_141271228 == 0) {
            DAT_141271228 = 7;
          }
          _DAT_141271228 = (ushort)DAT_141271228;
        }
        break;
      }
    }
  }
  if ((((((param_4 == '\0') && (lVar11 != 0)) && (*(short *)(lVar11 + 0xac) != -1)) ||
       ((param_3 == '\0' || ((*(uint *)(param_1 + 0x110) & 0x80000000) == 0)))) ||
      (cVar4 = FUN_140c88550(param_1), cVar4 != '\0')) ||
     (((lVar9 = FUN_140ca65e0(param_1), lVar9 == 0 || (*(int *)(lVar9 + 0x60) < 1)) ||
      (((**(byte **)(lVar9 + 0x58) & 0x80) == 0 ||
       (((DVar7 = GetTickCount(), 499 < DVar7 % 1000 ||
         (DAT_14127122a = '\x01' - DAT_14127122a, DAT_14127122a != '\0')) || (DAT_141271229 != '\0')
        ))))))) {
    if ((DAT_141271228 == DAT_141271229) && (DAT_14127122a == '\0')) {
      if (DAT_141271229 != '\0') {
        DAT_141271228 = '\0';
      }
    }
  }
  else if (DAT_141271228 == '\0') {
    _DAT_141271228 = 7;
  }
  return;
}

