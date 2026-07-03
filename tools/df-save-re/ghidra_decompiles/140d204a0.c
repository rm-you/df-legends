// FUN_140d204a0 @ 140d204a0
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d204a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined8 *_Memory;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  iVar5 = (int)(param_2[1] - *param_2 >> 3) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5;
    lVar7 = lVar6 * 8;
    do {
      lVar1 = *param_2;
      iVar3 = (int)(param_2[1] - lVar1 >> 3) + -1;
      if (-1 < iVar3) {
        lVar4 = (longlong)iVar3;
        do {
          if ((lVar6 != lVar4) &&
             (iVar3 = FUN_140071310(*(undefined8 *)(lVar1 + lVar6 * 8),
                                    *(undefined8 *)(lVar1 + lVar4 * 8)), iVar3 == 0)) {
            local_48 = 0xf;
            local_50 = 0;
            local_60 = 0;
            FUN_14000c780(&local_60,"Duplicate Object: ",0x12);
            FUN_14000cb40(&local_60,param_3,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_60,&DAT_140e59864,1);
            FUN_14000cb40(&local_60,*(undefined8 *)(*param_2 + lVar6 * 8),0);
            FUN_14014a240(&local_60);
            _Memory = *(undefined8 **)(*param_2 + lVar6 * 8);
            if (_Memory != (undefined8 *)0x0) {
              if (0xf < (ulonglong)_Memory[3]) {
                FUN_140002020(*_Memory,_Memory[3] + 1,1);
              }
              _Memory[3] = 0xf;
              _Memory[2] = 0;
              puVar2 = _Memory;
              if (0xf < (ulonglong)_Memory[3]) {
                puVar2 = (undefined8 *)*_Memory;
              }
              *(undefined1 *)puVar2 = 0;
              free(_Memory);
            }
            _Src = (void *)(*param_2 + lVar7 + 8);
            memmove((void *)(*param_2 + lVar7),_Src,param_2[1] - (longlong)_Src);
            param_2[1] = param_2[1] + -8;
            if (0xf < local_48) {
              FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
            }
            break;
          }
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      lVar7 = lVar7 + -8;
      lVar6 = lVar6 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

