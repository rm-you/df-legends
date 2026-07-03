// FUN_140847250 @ 140847250
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640
//   -> 14000c780 FUN_14000c780
//   -> 140847830 FUN_140847830
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1407f2110 FUN_1407f2110
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_140847250(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int param_5)

{
  ulonglong *puVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_90 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  plVar4 = operator_new(0x18);
  plVar4[2] = 0;
  *(undefined4 *)plVar4 = 2;
  plVar4[1] = param_1;
  pplVar2 = *(longlong ***)(param_2 + 0x28);
  local_98 = plVar4;
  if ((&local_98 < pplVar2) && (pplVar3 = *(longlong ***)(param_2 + 0x20), pplVar3 <= &local_98)) {
    if (pplVar2 == *(longlong ***)(param_2 + 0x30)) {
      FUN_14000c2d0(param_2 + 0x20,1);
    }
    if (*(undefined8 **)(param_2 + 0x28) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x28) =
           *(undefined8 *)
            (*(longlong *)(param_2 + 0x20) + ((longlong)&local_98 - (longlong)pplVar3 >> 3) * 8);
    }
  }
  else {
    if (pplVar2 == *(longlong ***)(param_2 + 0x30)) {
      FUN_14000c2d0(param_2 + 0x20,1);
    }
    if (*(undefined8 **)(param_2 + 0x28) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x28) = plVar4;
    }
  }
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 8;
  plVar4 = operator_new(0x18);
  *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
  *plVar4 = param_2;
  *(int *)(plVar4 + 1) = param_3;
  *(undefined4 *)(plVar4 + 2) = param_4;
  puVar1 = (ulonglong *)(param_1 + 0x80);
  local_98 = plVar4;
  if (((ulonglong)(longlong)param_5 <
       (ulonglong)((longlong)(*(longlong *)(param_1 + 0x88) - *puVar1) >> 3)) && (-1 < param_5)) {
    local_a8 = &local_98;
    FUN_140050640(puVar1,local_88,*puVar1 + (longlong)param_5 * 8);
    plVar4 = local_98;
  }
  else {
    pplVar2 = *(longlong ***)(param_1 + 0x88);
    if ((&local_98 < pplVar2) && (pplVar3 = (longlong **)*puVar1, pplVar3 <= &local_98)) {
      if (pplVar2 == *(longlong ***)(param_1 + 0x90)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) =
             *(undefined8 *)(*puVar1 + ((longlong)&local_98 - (longlong)pplVar3 >> 3) * 8);
      }
    }
    else {
      if (pplVar2 == *(longlong ***)(param_1 + 0x90)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = plVar4;
      }
    }
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 8;
  }
  if (param_3 != 6) {
    if ((DAT_1410b67dc != 1) && ((*(byte *)(param_2 + 0x10) & 2) != 0)) {
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      local_68 = 0xf;
      local_70 = 0;
      local_80 = 0;
      FUN_14000c780(&local_60,"DOUBLE TAGGED ITEM: ",0x14);
      FUN_140847830(param_1,&local_80);
      FUN_14000cb40(&local_60,&local_80,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_60,&DAT_140e5a200,2);
      local_70 = 0;
      puVar5 = &local_80;
      if (0xf < local_68) {
        puVar5 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      }
      *puVar5 = 0;
      FUN_1407f2110(param_2,&local_80,0,0xffffffff);
      FUN_14000cb40(&local_60,&local_80,0,0xffffffffffffffff);
      FUN_14014a240(&local_60);
      if (0xf < local_68) {
        FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
      }
      local_68 = 0xf;
      local_70 = 0;
      local_80 = 0;
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  }
  return plVar4;
}

