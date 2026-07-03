// FUN_140c9c6b0 @ 140c9c6b0
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140c41a40 FUN_140c41a40
//   -> 140dfb5b4 free


void FUN_140c9c6b0(longlong param_1)

{
  undefined8 *puVar1;
  void *_Memory;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  short local_res8 [4];
  short local_res10 [4];
  short local_res18 [8];
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
      local_res8[0] = -30000;
      if ((*(uint *)(lVar3 + 0x110) & 0x2000000) == 0) {
        local_res8[0] = *(short *)(lVar3 + 0xa8);
        local_res10[0] = *(short *)(lVar3 + 0xaa);
        local_res18[0] = *(short *)(lVar3 + 0xac);
LAB_140c9c7a7:
        if (((((local_res8[0] < 0) || (DAT_141d69554 <= local_res8[0])) || (local_res10[0] < 0)) ||
            ((DAT_141d69558 <= local_res10[0] || (local_res18[0] < 0)))) ||
           ((DAT_141d6955c <= local_res18[0] ||
            ((DAT_141d69520 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(DAT_141d69520 + ((longlong)local_res8[0] >> 4) * 8) +
                 ((longlong)local_res10[0] >> 4) * 8) + (longlong)local_res18[0] * 8) == 0))))))
        goto LAB_140c9c808;
      }
      else {
        puVar4 = *(undefined8 **)(lVar3 + 0x1c0);
        puVar1 = *(undefined8 **)(lVar3 + 0x1c8);
        if (puVar4 < puVar1) {
          do {
            iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
            if ((iVar2 == 0xb) && (lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x18))(), lVar3 != 0)
               ) {
              FUN_1408054d0(lVar3,local_res8,local_res10,local_res18);
              break;
            }
            puVar4 = puVar4 + 1;
          } while (puVar4 < puVar1);
          goto LAB_140c9c7a7;
        }
LAB_140c9c808:
        _Memory = *(void **)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
        if (_Memory != (void *)0x0) {
          FUN_140c41a40(_Memory);
          free(_Memory);
        }
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

