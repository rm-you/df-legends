// FUN_140cec410 @ 140cec410
// callees:
//   -> 1408246e0 FUN_1408246e0
//   -> 140cc1de0 FUN_140cc1de0
//   -> 140805600 FUN_140805600
//   -> 140c84610 FUN_140c84610
//   -> 140c9c850 FUN_140c9c850
//   -> 140082420 FUN_140082420
//   -> 1401b95a0 FUN_1401b95a0


void FUN_140cec410(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x20;
  if ((((DAT_141d86410 < 1) && (DAT_1410b67dc != 0)) &&
      (piVar5 = (int *)FUN_1408246e0(param_2,1), piVar5 != (int *)0x0)) &&
     (((piVar5[0x2f] == -1 || (lVar6 = FUN_140cc1de0(&DAT_141c66fd0), lVar6 == 0)) ||
      (cVar2 = FUN_140805600(param_2,lVar6), cVar2 == '\0')))) {
    FUN_140c84610(param_1,0,1);
    lVar6 = FUN_140c9c850(param_1);
    if (((piVar5[0x22] < 1) || ((**(byte **)(piVar5 + 0x20) & 2) == 0)) &&
       ((piVar5[0x2d] == -1 && (piVar5[0x2e] == -1)))) {
      plVar7 = (longlong *)FUN_140082420();
      *(undefined4 *)((longlong)plVar7 + 0x3c) = *(undefined4 *)(param_1 + 0xc10);
      if (lVar6 != 0) {
        *(undefined4 *)(plVar7 + 8) = *(undefined4 *)(lVar6 + 0x88);
        *(undefined4 *)((longlong)plVar7 + 0x44) = 0xffffffff;
        *(undefined2 *)(plVar7 + 10) = *(undefined2 *)(lVar6 + 0x82);
        *(undefined2 *)((longlong)plVar7 + 0x52) = *(undefined2 *)(lVar6 + 0x84);
      }
      *(undefined4 *)((longlong)plVar7 + 0x54) = 0xffffffff;
      uVar3 = (**(code **)**(undefined8 **)(piVar5 + 0x24))();
      *(undefined2 *)(plVar7 + 5) = uVar3;
      uVar3 = (**(code **)(**(longlong **)(piVar5 + 0x24) + 8))();
      *(undefined2 *)((longlong)plVar7 + 0x2a) = uVar3;
      uVar3 = (**(code **)(**(longlong **)(piVar5 + 0x24) + 0x10))();
      *(undefined2 *)((longlong)plVar7 + 0x2c) = uVar3;
      uVar4 = (**(code **)(**(longlong **)(piVar5 + 0x24) + 0x18))();
      *(undefined4 *)(plVar7 + 6) = uVar4;
      *(undefined4 *)((longlong)plVar7 + 0x34) =
           *(undefined4 *)(*(longlong *)(piVar5 + 0x24) + 0x1c);
      *(undefined4 *)(plVar7 + 0xd) = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_1416b1980;
      *(undefined4 *)((longlong)plVar7 + 0xc) = DAT_1416b1974;
      lVar6 = *plVar7;
    }
    else {
      plVar7 = (longlong *)FUN_1401b95a0();
      *(undefined4 *)(plVar7 + 1) = DAT_1416b1980;
      *(undefined4 *)((longlong)plVar7 + 0xc) = DAT_1416b1974;
      *(int *)(plVar7 + 5) = *piVar5;
      *(undefined4 *)((longlong)plVar7 + 0x2c) = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_1 + 0xc10);
      if (lVar6 != 0) {
        *(undefined4 *)((longlong)plVar7 + 0x34) = *(undefined4 *)(lVar6 + 0x88);
      }
      if ((DAT_1410b67dc == 1) && (0 < (int)plVar7[3])) {
        *(byte *)plVar7[2] = *(byte *)plVar7[2] & 0xfe;
      }
      lVar6 = *plVar7;
    }
    (**(code **)(lVar6 + 0x128))(plVar7);
    piVar5[0x2f] = *(int *)(param_1 + 0xc10);
    piVar5[0x2a] = -1;
    piVar5[0x2b] = -1;
    piVar5[0x2c] = -1;
    piVar5[0x2d] = -1;
    piVar5[0x2e] = -1;
    if (0 < piVar5[0x22]) {
      **(byte **)(piVar5 + 0x20) = **(byte **)(piVar5 + 0x20) & 0xfd;
    }
    piVar5[0x26] = -1000000;
    piVar5[0x27] = -1000000;
    piVar5[0x28] = -1000000;
    piVar5[0x29] = -1;
    lVar6 = *(longlong *)(param_1 + 0x11e8);
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0xc0) == 0x11)) &&
        (piVar1 = *(int **)(lVar6 + 0xb8), *piVar1 == *piVar5)) && ((piVar1[3] & 1U) == 0)) {
      piVar1[3] = piVar1[3] | 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x11e8) + 0x10) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x11e8) + 0x14) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x11e8) + 8) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x11e8) + 0xc) = 0xffffffff;
    }
  }
  return;
}

