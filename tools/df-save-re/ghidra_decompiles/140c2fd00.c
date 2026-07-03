// FUN_140c2fd00 @ 140c2fd00
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 140004650 FUN_140004650
//   -> 14000c780 FUN_14000c780
//   -> 140c2ed10 FUN_140c2ed10
//   -> 14078e060 FUN_14078e060
//   -> 140527030 FUN_140527030
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140541a20 FUN_140541a20
//   -> 14073eb00 FUN_14073eb00
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140740270 FUN_140740270
//   -> 140c713b0 FUN_140c713b0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2fd00(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  short sVar11;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined2 local_90;
  undefined1 local_88;
  char local_87;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0xd60);
  local_87 = param_3;
  if ((lVar6 != 0) && (puVar8 = (undefined8 *)(lVar6 + 0x20), *(longlong *)(lVar6 + 0x30) != 0)) {
LAB_140c301bb:
    if (param_2 != puVar8) {
      FUN_14000c8b0(param_2,puVar8,0,0xffffffffffffffff);
    }
    return;
  }
  if (DAT_1410b67d8 - 4U < 2) {
    puVar8 = (undefined8 *)(param_1 + 8);
    goto LAB_140c301bb;
  }
  sVar11 = *(short *)(param_1 + 0xa0);
  local_80 = FUN_140ca8390();
  if (local_80 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1407ad250(local_80);
    if (lVar4 != 0) {
      if (((*(int *)(lVar4 + 0x88) != -1) && (lVar5 = FUN_140004650(&DAT_141d7a048), lVar5 != 0)) &&
         (0 < *(int *)(lVar5 + 0xd0))) {
        if ((**(byte **)(lVar5 + 200) & 4) != 0) {
          FUN_14000c780(param_2,"deity",5);
          return;
        }
        if ((0 < *(int *)(lVar5 + 0xd0)) && ((**(byte **)(lVar5 + 200) & 8) != 0)) {
          FUN_14000c780(param_2,"force",5);
          return;
        }
      }
      if (*(short *)(lVar4 + 0xac) != -1) {
        sVar11 = *(short *)(lVar4 + 0xac);
      }
    }
  }
  local_48 = 0xf;
  local_50 = 0;
  local_60 = 0;
  if ((lVar6 == 0) && (*(char *)(param_1 + 0x81c) == '\0')) {
    local_90 = 0xfffe;
  }
  else {
    local_90 = 0xffff;
  }
  local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
  cVar1 = FUN_140c2ed10(&local_60,sVar11,*(undefined2 *)(param_1 + 0xa4),
                        *(undefined2 *)(param_1 + 300));
  if ((lVar4 == 0) || (*(short *)(lVar4 + 0xac) == -1)) {
    lVar6 = FUN_140ca8390(param_1);
    if (lVar6 != 0) {
      local_98 = &local_78;
      lVar6 = FUN_14078e060(lVar6,0xffffffff,&local_88,&local_70);
      if ((lVar6 != 0) && (local_80 != 0)) {
        puVar7 = (undefined1 *)FUN_140527030(lVar6,*(undefined1 *)(local_80 + 6));
        if (&local_60 != puVar7) {
          FUN_14000c8b0(&local_60,puVar7,0,0xffffffffffffffff);
        }
        if (0 < *(short *)(lVar6 + 0x2c8)) {
          FUN_140541a20(local_70,local_78,&local_60);
        }
        cVar1 = '\0';
      }
    }
    lVar6 = FUN_140ca8390(param_1);
    if ((lVar6 != 0) && (sVar3 = FUN_14073eb00(lVar6,4,0xffffffff), 0 < sVar3)) {
      if (((ushort)(sVar11 - 0x67U) < 2) && (local_50 != 0)) {
        FUN_14000c9f0(&local_60," Slave",6);
      }
      else {
        FUN_14000c780(&local_60,"Slave",5);
      }
      cVar1 = '\0';
    }
    lVar6 = FUN_140ca8390(param_1);
    if (((lVar6 != 0) && (sVar3 = FUN_14073eb00(lVar6,6,0xffffffff), 0 < sVar3)) ||
       ((lVar6 = FUN_140ca8390(param_1), lVar6 != 0 &&
        (sVar3 = FUN_140740270(lVar6,7,0xffffffff), 0 < sVar3)))) {
      if (((ushort)(sVar11 - 0x67U) < 2) && (local_50 != 0)) {
        FUN_14000c9f0(&local_60," Prisoner",9);
      }
      else {
        FUN_14000c780(&local_60,"Prisoner",8);
      }
      cVar1 = '\0';
    }
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) && (local_87 != '\0')) {
    if (&local_60 != (undefined1 *)(param_1 + 0x80)) {
      FUN_14000c8b0(&local_60,(undefined1 *)(param_1 + 0x80),0,0xffffffffffffffff);
    }
    cVar1 = '\0';
  }
  param_2[2] = 0;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar8 = 0;
  cVar2 = FUN_140c713b0(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
  if (((cVar2 != '\0') && (*(int *)(param_1 + 0x3a4) == -1)) &&
     ((*(uint *)(param_1 + 0x110) & 0x4000000) != 0)) {
    FUN_14000c9f0(param_2,"Stray ",6);
  }
  if (((*(uint *)(param_1 + 0x118) & 0x1000) != 0) && (*(char *)(param_1 + 0x81c) == '\0')) {
    if ((cVar1 != '\0') && (param_2[2] == 0)) {
      FUN_14000c780(param_2,"Ghost",5);
      goto LAB_140c30199;
    }
    FUN_14000c9f0(param_2,"Ghostly ",8);
  }
  FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
  if (*(char *)(param_1 + 0x81c) != '\0') {
    if (param_2[2] != 0) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    FUN_14000cb40(param_2,param_1 + 0x820,0,0xffffffffffffffff);
  }
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    if (param_2[2] == 0) {
      uVar10 = 6;
      pcVar9 = "Corpse";
    }
    else {
      uVar10 = 7;
      pcVar9 = " Corpse";
    }
    FUN_14000c9f0(param_2,pcVar9,uVar10);
  }
LAB_140c30199:
  if (local_48 < 0x10) {
    return;
  }
  FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
  return;
}

