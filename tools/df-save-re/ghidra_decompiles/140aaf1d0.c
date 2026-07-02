// FUN_140aaf1d0 @ 140aaf1d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140aaf1d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8;
  undefined4 uStackX_c;
  int local_res18 [4];
  
  DAT_141c67fe8 = DAT_141c67fe0;
  iVar5 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
  uStackX_c = (undefined4)((ulonglong)param_1 >> 0x20);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  DAT_141c68000 = DAT_141c67ff8;
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar4 = 0;
  lVar7 = lVar4;
  if (0 < iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,
                             *(undefined4 *)(*(longlong *)(DAT_141c67368 + lVar7 * 8) + 0x1c));
      FUN_1405bb7c0(param_2,&local_res8,4);
      sVar2 = (**(code **)**(undefined8 **)(DAT_141c67368 + lVar7 * 8))();
      local_res18[0] = (int)sVar2;
      FUN_1405bb7c0(param_2,local_res18,4);
      puVar1 = (undefined8 *)(DAT_141c67368 + lVar7 * 8);
      if ((puVar1 < DAT_141c67fe8) && (DAT_141c67fe0 <= puVar1)) {
        lVar6 = (longlong)puVar1 - (longlong)DAT_141c67fe0;
        if (DAT_141c67fe8 == DAT_141c67ff0) {
          FUN_14000c2d0(&DAT_141c67fe0,1);
        }
        if (DAT_141c67fe8 != (undefined8 *)0x0) {
          uVar3 = DAT_141c67fe0[lVar6 >> 3];
LAB_140aaf311:
          *DAT_141c67fe8 = uVar3;
        }
      }
      else {
        if (DAT_141c67fe8 == DAT_141c67ff0) {
          FUN_14000c2d0(&DAT_141c67fe0,1);
        }
        if (DAT_141c67fe8 != (undefined8 *)0x0) {
          uVar3 = *puVar1;
          goto LAB_140aaf311;
        }
      }
      DAT_141c67fe8 = DAT_141c67fe8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141c6fda8 - DAT_141c6fda0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  DAT_141c70660 = DAT_141c70658;
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,
                             *(undefined4 *)(*(longlong *)(DAT_141c6fda0 + lVar7 * 8) + 0x50));
      FUN_1405bb7c0(param_2,&local_res8,4);
      local_res18[0] = (**(code **)(**(longlong **)(DAT_141c6fda0 + lVar7 * 8) + 0xd8))();
      FUN_1405bb7c0(param_2,local_res18,4);
      puVar1 = (undefined8 *)(DAT_141c6fda0 + lVar7 * 8);
      if ((puVar1 < DAT_141c70660) && (DAT_141c70658 <= puVar1)) {
        lVar6 = (longlong)puVar1 - (longlong)DAT_141c70658;
        if (DAT_141c70660 == DAT_141c70668) {
          FUN_14000c2d0(&DAT_141c70658,1);
        }
        if (DAT_141c70660 != (undefined8 *)0x0) {
          uVar3 = DAT_141c70658[lVar6 >> 3];
LAB_140aaf447:
          *DAT_141c70660 = uVar3;
        }
      }
      else {
        if (DAT_141c70660 == DAT_141c70668) {
          FUN_14000c2d0(&DAT_141c70658,1);
        }
        if (DAT_141c70660 != (undefined8 *)0x0) {
          uVar3 = *puVar1;
          goto LAB_140aaf447;
        }
      }
      DAT_141c70660 = DAT_141c70660 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141c53720 - DAT_141c53718 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,*(undefined4 *)(*(longlong *)(DAT_141c53718 + lVar7 * 8) + 4)
                            );
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141c67098 - DAT_141c67090 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141c67090 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141c68018 - DAT_141c68010 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141c68010 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  local_res8 = (int)(DAT_141c536b8 - DAT_141c536b0 >> 3);
  FUN_1405bb7c0(param_2,&local_res8,4);
  iVar5 = (int)(DAT_141d64d40 - DAT_141d64d38 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d64d38 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d64d70 - DAT_141d64d68 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d64d68 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d64da0 - DAT_141d64d98 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d64d98 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69120 - DAT_141d69118 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69118 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69150 - DAT_141d69148 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69148 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69180 - DAT_141d69178 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69178 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d691a8 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d691d8 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69210 - DAT_141d69208 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69208 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69258 - DAT_141d69250 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69250 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69288 - DAT_141d69280 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69280 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d692b8 - DAT_141d692b0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d692b0 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d692e0 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69318 - DAT_141d69310 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69310 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69348 - DAT_141d69340 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69340 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69378 - DAT_141d69370 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69370 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d693a8 - DAT_141d693a0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d693a0 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d693d8 - DAT_141d693d0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d693d0 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69408 - DAT_141d69400 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69400 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69438 - DAT_141d69430 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69430 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69468 - DAT_141d69460 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69460 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d69498 - DAT_141d69490 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  lVar7 = lVar4;
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d69490 + lVar7 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  iVar5 = (int)(DAT_141d694c8 - DAT_141d694c0 >> 3);
  _local_res8 = CONCAT44(uStackX_c,iVar5);
  FUN_1405bb7c0(param_2,&local_res8,4);
  if (0 < (longlong)iVar5) {
    do {
      _local_res8 = CONCAT44(uStackX_c,**(undefined4 **)(DAT_141d694c0 + lVar4 * 8));
      FUN_1405bb7c0(param_2,&local_res8,4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}

