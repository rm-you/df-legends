// FUN_1400bea90 @ 1400bea90
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1400b8d80 FUN_1400b8d80
//   -> 1408de7f0 FUN_1408de7f0


void FUN_1400bea90(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int local_res20 [2];
  int local_48 [2];
  longlong *local_40;
  
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  puVar4 = (undefined8 *)*param_1;
  plVar5 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_1[1];
  do {
    if (puVar1 <= puVar4) {
      FUN_1405bba90(param_2,local_res20,4);
      FUN_14000b9d0(param_1 + 4,(longlong)local_res20[0]);
      puVar4 = (undefined8 *)param_1[4];
      plVar2 = (longlong *)((param_1[5] - (longlong)puVar4) + 7U >> 3);
      if ((undefined8 *)param_1[5] < puVar4) {
        plVar2 = plVar5;
      }
      if (plVar2 != (longlong *)0x0) {
        do {
          plVar3 = (longlong *)FUN_1408de7f0(param_2);
          *puVar4 = plVar3;
          (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
          plVar5 = (longlong *)((longlong)plVar5 + 1);
          puVar4 = puVar4 + 1;
        } while (plVar5 < plVar2);
      }
      return;
    }
    FUN_1405bba90(param_2,local_48,4);
    if (local_48[0] == 0) {
      local_40 = operator_new(0x18);
      *local_40 = (longlong)mental_picture_element_hfst::vftable;
LAB_1400beb65:
      *(undefined4 *)(local_40 + 2) = 0xffffffff;
      *(undefined4 *)(local_40 + 1) = 0xffffffff;
      plVar2 = local_40;
    }
    else {
      if (local_48[0] == 1) {
        local_40 = operator_new(0x18);
        *local_40 = (longlong)mental_picture_element_sitest::vftable;
        goto LAB_1400beb65;
      }
      plVar2 = plVar5;
      if (local_48[0] == 2) {
        local_40 = operator_new(0x18);
        *local_40 = (longlong)mental_picture_element_regionst::vftable;
        goto LAB_1400beb65;
      }
    }
    *puVar4 = plVar2;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    puVar4 = puVar4 + 1;
  } while( true );
}

