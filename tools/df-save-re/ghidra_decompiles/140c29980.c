// FUN_140c29980 @ 140c29980
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 140847830 FUN_140847830
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 14084d080 FUN_14084d080
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c29980(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a2;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_68 = 0xfffffffffffffffe;
  local_20 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    if (DAT_1410b67dc == 0) {
      bVar4 = DAT_141c345b4 & 0x70;
    }
    else {
      bVar4 = DAT_141c345b4 & 8;
    }
    if (bVar4 != 0) {
      local_28 = 0xf;
      local_30 = 0;
      local_40 = 0;
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      FUN_14000c780(&local_40,"OVERWROTE JOB: ",0xf);
      FUN_140847830(*(undefined8 *)(param_1 + 0x4b8),&local_60);
      FUN_14000cb40(&local_40,&local_60,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_40,&DAT_140f8adf4,4);
      FUN_140847830(param_2,&local_60);
      FUN_14000cb40(&local_40,&local_60,0,0xffffffffffffffff);
      local_a2 = 0x8ad08ad0;
      local_9e = 0x8ad0;
      local_9c = 0;
      local_98 = 0x8ad08ad0;
      local_94 = 0x8ad0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0xffffffffffffffff;
      local_70 = 0xffffffff;
      local_6c = 0;
      local_a8 = 0x4010d;
      local_a4 = 1;
      local_8c = 5000;
      FUN_140074660(&DAT_141d64dc8,&local_40,&local_a8);
      FUN_14014a240(&local_40);
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      if (0xf < local_28) {
        FUN_140002020(CONCAT71(uStack_3f,local_40),local_28 + 1,1);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if ((-1 < iVar2) && ((ulonglong)(longlong)iVar2 < (ulonglong)(DAT_141c68068 - DAT_141c68060 >> 3))
     ) {
    lVar3 = *(longlong *)(DAT_141c68060 + (longlong)iVar2 * 8);
    puVar1 = (uint *)(lVar3 + 0x10);
    *puVar1 = *puVar1 | 1;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  }
  FUN_14084d080(param_2,0x13,*(undefined4 *)(param_1 + 0x130));
  *(longlong *)(param_1 + 0x4b8) = param_2;
  *(undefined2 *)(param_2 + 0x74) = 0;
  return;
}

