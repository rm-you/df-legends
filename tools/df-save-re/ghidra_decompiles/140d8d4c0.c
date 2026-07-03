// FUN_140d8d4c0 @ 140d8d4c0
// callees:
//   -> 140d85b20 FUN_140d85b20
//   -> 140019af0 FUN_140019af0
//   -> 140d228a0 FUN_140d228a0
//   -> 1400c5df0 FUN_1400c5df0
//   -> 140d1fd30 FUN_140d1fd30
//   -> 1400047c0 FUN_1400047c0
//   -> 140019bb0 FUN_140019bb0
//   -> 140acc530 FUN_140acc530
//   -> 140acc6c0 FUN_140acc6c0
//   -> 140d23040 FUN_140d23040
//   -> 140168eb0 FUN_140168eb0
//   -> 140d431b0 FUN_140d431b0
//   -> 140004830 FUN_140004830
//   -> 140d2cb70 FUN_140d2cb70
//   -> 14013b560 FUN_14013b560
//   -> 1409f0480 FUN_1409f0480
//   -> 140367840 FUN_140367840
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1405b4fb0 FUN_1405b4fb0


void FUN_140d8d4c0(longlong param_1,undefined2 param_2,undefined2 param_3,char param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined2 local_res8 [4];
  uint uVar13;
  uint in_stack_ffffffffffffff90;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined2 local_48 [8];
  
  sVar1 = *(short *)(param_1 + 0x1160ec);
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  while (sVar1 = sVar1 + -1, -1 < sVar1) {
    iVar9 = FUN_140d85b20(param_1,param_2,param_3,sVar1);
    uVar10 = FUN_140019af0(param_1,param_2);
    if ((iVar9 != 0) || (bVar2)) {
      uVar13 = 0x10000;
      FUN_1400c5df0(param_1,param_2);
      bVar5 = true;
      bVar3 = bVar4;
      if (iVar9 - 2U < 2) {
        bVar4 = true;
        bVar3 = true;
      }
    }
    else {
      FUN_140d228a0(param_1,param_2);
      uVar13 = 0x4000;
      FUN_140d228a0(param_1,param_2);
      bVar5 = false;
    }
    if ((!bVar3) && ((uVar10 >> 0xf & 1) != 0)) {
      uVar13 = 0x8000;
      FUN_1400c5df0(param_1,param_2,param_3,sVar1,0x8000);
      if ((param_4 != '\0') && (sVar8 = FUN_140d1fd30(param_1,param_2), sVar8 != 0x275b)) {
        puVar11 = (uint *)FUN_1400047c0(param_1,param_2);
        if (puVar11 != (uint *)0x0) {
          *puVar11 = *puVar11 | 2;
          puVar11 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar11[0x23] * 4);
          *puVar11 = *puVar11 | 5;
        }
        in_stack_ffffffffffffff90 = CONCAT22((short)(in_stack_ffffffffffffff90 >> 0x10),sVar1);
        FUN_140019bb0(param_1,local_48,local_res8,param_2,param_3,in_stack_ffffffffffffff90);
        if (DAT_1410b67dc == 0) {
          sVar8 = FUN_140acc530();
        }
        else {
          sVar8 = FUN_140acc6c0(*(undefined8 *)(param_1 + 0x119b60),local_48[0],local_res8[0]);
        }
        uVar13 = (uint)sVar8;
        FUN_140d23040(param_1,param_2,param_3,sVar1,uVar13);
        cVar6 = FUN_140168eb0(param_1,param_2,param_3,sVar1);
        if ('\0' < cVar6) {
          uVar13 = uVar13 & 0xffffff00;
          FUN_140d431b0(param_1,param_2,param_3,sVar1,uVar13);
        }
      }
    }
    if (bVar5) {
      uVar10 = FUN_140019af0(param_1,param_2,param_3,sVar1,uVar13);
      if ((uVar10 >> 0xf & 1) == 0) {
        if (!bVar3) {
          uVar13 = 0x4000;
          FUN_140d228a0(param_1,param_2);
        }
      }
      else {
        uVar13 = 0x4000;
        FUN_1400c5df0(param_1,param_2);
      }
    }
    sVar8 = FUN_140004830(param_1,param_2,param_3,sVar1,uVar13);
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
    uVar13 = uVar13 & 0xffffff00;
    cVar6 = FUN_140d2cb70(param_1,param_2);
    if (((cVar6 == '\0') &&
        (((cVar6 = FUN_14013b560(sVar8), cVar6 == '\0' ||
          (cVar7 = FUN_1409f0480(sVar8), cVar7 != '\0')) &&
         (cVar7 = FUN_140367840(param_1,param_2,param_3,sVar1,uVar13,in_stack_ffffffffffffff90,
                                uVar14,uVar15,uVar16), cVar7 == '\0')))) &&
       (bVar2 = true, cVar6 == '\0')) {
      cVar6 = FUN_1400c05e0(sVar8);
      if (cVar6 != '\0') {
        in_stack_ffffffffffffff90 =
             (int)(*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >> 3) - 1;
        lVar12 = FUN_1405b4fb0(param_1,param_2);
        if (lVar12 == 0) {
          sVar8 = 0x20;
        }
        else {
          sVar8 = *(short *)(lVar12 + 0x12);
        }
      }
      if (((sVar8 != 1) && (sVar8 != 0x20)) && ((sVar8 != 0x23 && (sVar8 != 0x2a)))) {
        bVar4 = true;
        bVar3 = true;
      }
    }
  }
  return;
}

