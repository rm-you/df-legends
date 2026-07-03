// FUN_140d372e0 @ 140d372e0
// callees:
//   -> 140d36e50 FUN_140d36e50
//   -> 14007b5f0 FUN_14007b5f0
//   -> 1405bc680 FUN_1405bc680
//   -> EXTERNAL:00000070 MessageBoxA
//   -> EXTERNAL:000000ee exit
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 1405bc3f0 FUN_1405bc3f0
//   -> 14000c780 FUN_14000c780
//   -> 140d37030 FUN_140d37030
//   -> 14000ccd0 FUN_14000ccd0
//   -> 14000c620 FUN_14000c620
//   -> 140050390 FUN_140050390
//   -> 14000c260 FUN_14000c260
//   -> 140d37000 FUN_140d37000
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d372e0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 ******ppppppuVar2;
  LPCSTR *****ppppppCVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 *****local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  LPCSTR ****local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_b0 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  switch(*(undefined4 *)(param_1 + 0x26b828)) {
  case 0:
    FUN_140d36e50(param_1);
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_50 = 0xf;
    local_58 = 0;
    local_68[0] = 0;
    FUN_14007b5f0(&local_a8,param_2,"objects/text/book_instruction.txt");
    puVar1 = &local_a8;
    if (0xf < local_90) {
      puVar1 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
    }
    FUN_1405bc680(puVar1,&local_c8);
    if (lStack_c0 - local_c8 >> 3 == 0) {
      FUN_14007b5f0(local_48,&local_a8," NOT FOUND");
      ppppppCVar3 = local_48;
      if (0xf < local_30) {
        ppppppCVar3 = (LPCSTR *****)local_48[0];
      }
      MessageBoxA((HWND)0x0,(LPCSTR)ppppppCVar3,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (0xf < local_90) {
      FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_140051e20(&local_c8);
    if (local_c8 != 0) {
      FUN_140002020(local_c8,local_b8 - local_c8 >> 3,8);
    }
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_50 = 0xf;
    local_58 = 0;
    local_68[0] = 0;
    FUN_14007b5f0(&local_a8,param_2,"objects/text/book_art.txt");
    puVar1 = &local_a8;
    if (0xf < local_90) {
      puVar1 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
    }
    FUN_1405bc680(puVar1,&local_c8);
    if (lStack_c0 - local_c8 >> 3 == 0) {
      FUN_14007b5f0(local_48,&local_a8," NOT FOUND");
      ppppppCVar3 = local_48;
      if (0xf < local_30) {
        ppppppCVar3 = (LPCSTR *****)local_48[0];
      }
      MessageBoxA((HWND)0x0,(LPCSTR)ppppppCVar3,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (0xf < local_90) {
      FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_140051e20(&local_c8);
    if (local_c8 != 0) {
      FUN_140002020(local_c8,local_b8 - local_c8 >> 3,8);
    }
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_50 = 0xf;
    local_58 = 0;
    local_68[0] = 0;
    FUN_14007b5f0(&local_a8,param_2,"objects/text/secret_death.txt");
    puVar1 = &local_a8;
    if (0xf < local_90) {
      puVar1 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
    }
    FUN_1405bc680(puVar1,&local_c8);
    if (lStack_c0 - local_c8 >> 3 == 0) {
      FUN_14007b5f0(local_48,&local_a8," NOT FOUND");
      ppppppCVar3 = local_48;
      if (0xf < local_30) {
        ppppppCVar3 = (LPCSTR *****)local_48[0];
      }
      MessageBoxA((HWND)0x0,(LPCSTR)ppppppCVar3,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (0xf < local_90) {
      FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_140051e20(&local_c8);
    if (local_c8 != 0) {
      FUN_140002020(local_c8,local_b8 - local_c8 >> 3,8);
    }
    *(undefined4 *)(param_1 + 0x26b828) = 1;
    FUN_14007b5f0(local_88,param_2,"objects/language_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 1:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"LANGUAGE",8);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 2;
    FUN_14007b5f0(local_88,param_2,"objects/descriptor_shape_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 2:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"DESCRIPTOR_SHAPE",0x10);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 3;
    FUN_14007b5f0(local_88,param_2,"objects/descriptor_color_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 3:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"DESCRIPTOR_COLOR",0x10);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 4;
    FUN_14007b5f0(local_88,param_2,"objects/descriptor_pattern_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 4:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"DESCRIPTOR_PATTERN",0x12);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 5;
    FUN_14007b5f0(local_88,param_2,"objects/material_template_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 5:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"MATERIAL_TEMPLATE",0x11);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 6;
    FUN_14007b5f0(local_88,param_2,"objects/inorganic_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 6:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"INORGANIC",9);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 7;
    FUN_14007b5f0(local_88,param_2,"objects/plant_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 7:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"PLANT",5);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 8;
    FUN_14007b5f0(local_88,param_2,"objects/tissue_template_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 8:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"TISSUE_TEMPLATE",0xf);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 9;
    FUN_14007b5f0(local_88,param_2,"objects/item_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 9:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,&DAT_140eb3e70,4);
      FUN_140d37030(param_1,param_2,&local_a8);
      goto LAB_140d376d1;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 10;
    FUN_14007b5f0(local_88,param_2,"objects/building_*.txt");
    *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
    *(undefined4 *)(param_1 + 0x26b848) = 0;
    ppppppuVar2 = local_88;
    if (0xf < local_70) {
      ppppppuVar2 = (undefined8 ******)local_88[0];
    }
    FUN_1405bc3f0(ppppppuVar2,param_1 + 0x26b830);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    break;
  case 10:
    if ((ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3) <=
        (ulonglong)(longlong)*(int *)(param_1 + 0x26b848)) {
      *(undefined4 *)(param_1 + 0x26b828) = 0xb;
      FUN_14007b5f0(&local_a8,param_2,"objects/b_detail_plan_*.txt");
      *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
      *(undefined4 *)(param_1 + 0x26b848) = 0;
      puVar1 = &local_a8;
      if (0xf < local_90) {
        puVar1 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
      }
      uVar4 = FUN_1405bc3f0(puVar1,param_1 + 0x26b830);
      *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
      if (0xf < local_90) {
        FUN_14000ccd0(uVar4,CONCAT71(uStack_a7,local_a8),local_90 + 1);
      }
      local_90 = 0xf;
      FUN_14000c620(&local_a8,0);
      return;
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_14000c780(&local_a8,"BUILDING",8);
    FUN_140d37030(param_1,param_2,&local_a8);
LAB_140d376d1:
    if (local_90 < 0x10) {
      return;
    }
    local_88[0] = (undefined8 *****)CONCAT71(uStack_a7,local_a8);
    local_70 = local_90;
    goto LAB_140d37669;
  case 0xb:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"BODY_DETAIL_PLAN");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0xc;
    FUN_14007b5f0(local_68,param_2,"objects/body_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0xc:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,&DAT_140ea8780);
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0xd;
    FUN_14007b5f0(local_68,param_2,"objects/c_variation_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0xd:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"CREATURE_VARIATION");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0xe;
    FUN_14007b5f0(local_68,param_2,"objects/creature_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0xe:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"CREATURE");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0xf;
    FUN_14007b5f0(local_68,param_2,"objects/entity_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0xf:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"ENTITY");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0x10;
    FUN_14007b5f0(local_68,param_2,"objects/reaction_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0x10:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"REACTION");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
      return;
    }
    *(undefined4 *)(param_1 + 0x26b828) = 0x11;
    FUN_14007b5f0(local_68,param_2,"objects/interaction_*.txt");
    FUN_140d37000(param_1);
    *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    FUN_14000c260(local_68);
    return;
  case 0x11:
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x26b848) <
        (ulonglong)(*(longlong *)(param_1 + 0x26b838) - *(longlong *)(param_1 + 0x26b830) >> 3)) {
      FUN_140050390(local_68,"INTERACTION");
      FUN_140d37030(param_1,param_2,local_68);
      FUN_14000c260(local_68);
    }
    else {
      *(undefined4 *)(param_1 + 0x26b828) = 0x12;
      *(int *)(param_1 + 0x26b82c) = *(int *)(param_1 + 0x26b82c) + 1;
    }
  default:
    goto switchD_140d37337_default;
  }
  if (0xf < local_70) {
LAB_140d37669:
    FUN_140002020(local_88[0],local_70 + 1,1);
  }
switchD_140d37337_default:
  return;
}

