// FUN_140ca7950 @ 140ca7950
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140c303c0 FUN_140c303c0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ca7950(longlong param_1)

{
  void *_Src;
  void *_Dst;
  longlong *_Memory;
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_b8;
  local_38 = 0xf;
  iVar6 = 0;
  local_40 = 0;
  local_50 = 0;
  iVar2 = (int)(DAT_141c53708 - DAT_141c53700 >> 3) + -1;
  lVar7 = (longlong)iVar2;
  lVar4 = DAT_141c53700;
  lVar8 = DAT_141c53708;
  if (iVar2 < 0) goto LAB_140ca7b29;
  do {
    _Memory = *(longlong **)(lVar4 + lVar7 * 8);
    if ((*_Memory == param_1) && (iVar6 = iVar6 + 1, _Memory != (longlong *)0x0)) {
      iVar2 = (int)(lVar8 - lVar4 >> 3) + -1;
      if (-1 < iVar2) {
        lVar3 = (longlong)iVar2;
        do {
          if (*(longlong **)(lVar4 + lVar3 * 8) == _Memory) {
            _Dst = (void *)(lVar4 + (longlong)iVar2 * 8);
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,lVar8 - (longlong)_Src);
            DAT_141c53708 = DAT_141c53708 + -8;
            break;
          }
          iVar2 = iVar2 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
      }
      free(_Memory);
      lVar4 = DAT_141c53700;
      lVar8 = DAT_141c53708;
    }
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  if (iVar6 < 1) goto LAB_140ca7b29;
  if (DAT_1410b67dc == 0) {
    bVar1 = DAT_141c34594 & 0x70;
  }
  else {
    bVar1 = DAT_141c34594 & 8;
  }
  if (bVar1 == 0) goto LAB_140ca7b29;
  if (iVar6 == 1) {
    FUN_140c303c0(param_1,&local_50,0);
    uVar9 = 0x15;
    pcVar5 = "\'s mandate has ended.";
LAB_140ca7aa0:
    FUN_14000c9f0(&local_50,pcVar5,uVar9);
  }
  else if (1 < iVar6) {
    FUN_140c303c0(param_1,&local_50,0);
    uVar9 = 0x17;
    pcVar5 = "\'s mandates have ended.";
    goto LAB_140ca7aa0;
  }
  local_8c = 0;
  local_88 = 0x8ad08ad0;
  local_84 = 0x8ad0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_98 = 0x10105;
  local_94 = 1;
  local_7c = 2000;
  local_92 = *(undefined2 *)(param_1 + 0xa8);
  local_90 = *(undefined2 *)(param_1 + 0xaa);
  local_8e = *(undefined2 *)(param_1 + 0xac);
  local_78 = param_1;
  FUN_140074660(&DAT_141d64dc8,&local_50,&local_98);
LAB_140ca7b29:
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  return;
}

