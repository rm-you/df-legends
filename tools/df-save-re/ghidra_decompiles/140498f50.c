// FUN_140498f50 @ 140498f50
// callees:
//   -> 1404995f0 FUN_1404995f0
//   -> 140dfb5b4 free


void FUN_140498f50(longlong param_1)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (*(longlong *)(param_1 + 0xc88) - *(longlong *)(param_1 + 0xc80) >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar5 + *(longlong *)(param_1 + 0xc80));
      if (pvVar1 != (void *)0x0) {
        FUN_1404995f0(pvVar1);
        free(pvVar1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0xc88) - *(longlong *)(param_1 + 0xc80) >> 3));
  }
  *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xc80);
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 0xca0) - *(longlong *)(param_1 + 0xc98) >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar3 + *(longlong *)(param_1 + 0xc98));
      if (pvVar1 != (void *)0x0) {
        FUN_1404995f0(pvVar1);
        free(pvVar1);
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar3 = uVar3 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0xca0) - *(longlong *)(param_1 + 0xc98) >> 3));
  }
  *(undefined8 *)(param_1 + 0xca0) = *(undefined8 *)(param_1 + 0xc98);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(param_1 + 0x710);
  *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x758);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_1 + 0x770);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_1 + 0x830);
  *(undefined8 *)(param_1 + 0x850) = *(undefined8 *)(param_1 + 0x848);
  *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(param_1 + 0x890);
  *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(param_1 + 0x8a8);
  *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(param_1 + 0x860);
  *(undefined8 *)(param_1 + 0x880) = *(undefined8 *)(param_1 + 0x878);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(param_1 + 0x8c0);
  *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(param_1 + 0x8d8);
  *(undefined8 *)(param_1 + 0x8f8) = *(undefined8 *)(param_1 + 0x8f0);
  *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(param_1 + 0x908);
  *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x920);
  *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(param_1 + 0x938);
  *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(param_1 + 0x950);
  *(undefined8 *)(param_1 + 0x970) = *(undefined8 *)(param_1 + 0x968);
  *(undefined8 *)(param_1 + 0x988) = *(undefined8 *)(param_1 + 0x980);
  *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(param_1 + 0x998);
  *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_1 + 0x9b0);
  *(undefined8 *)(param_1 + 0x9d0) = *(undefined8 *)(param_1 + 0x9c8);
  *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_1 + 0xa10);
  *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(param_1 + 0xa28);
  *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xa40);
  *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xa58);
  *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xa70);
  *(undefined8 *)(param_1 + 0xa90) = *(undefined8 *)(param_1 + 0xa88);
  *(undefined8 *)(param_1 + 0xaa8) = *(undefined8 *)(param_1 + 0xaa0);
  *(undefined8 *)(param_1 + 0xac0) = *(undefined8 *)(param_1 + 0xab8);
  *(undefined8 *)(param_1 + 0x9e8) = *(undefined8 *)(param_1 + 0x9e0);
  *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0x9f8);
  *(undefined8 *)(param_1 + 0xb38) = *(undefined8 *)(param_1 + 0xb30);
  *(undefined8 *)(param_1 + 0xbe0) = *(undefined8 *)(param_1 + 0xbd8);
  *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_1 + 0xb48);
  *(undefined8 *)(param_1 + 0xbf8) = *(undefined8 *)(param_1 + 0xbf0);
  *(undefined8 *)(param_1 + 0xb68) = *(undefined8 *)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xc10) = *(undefined8 *)(param_1 + 0xc08);
  *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(param_1 + 0xb78);
  *(undefined8 *)(param_1 + 0xc28) = *(undefined8 *)(param_1 + 0xc20);
  *(undefined8 *)(param_1 + 0xb98) = *(undefined8 *)(param_1 + 0xb90);
  *(undefined8 *)(param_1 + 0xc40) = *(undefined8 *)(param_1 + 0xc38);
  *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(param_1 + 0xba8);
  *(undefined8 *)(param_1 + 0xc58) = *(undefined8 *)(param_1 + 0xc50);
  *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xbc0);
  *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xc68);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x548);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x560);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x578);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x5a8);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_1 + 0x5d8);
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_1 + 0x5f0);
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x608);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_1 + 0x620);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x638);
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_1 + 0x650);
  *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(param_1 + 0x668);
  *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(param_1 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_1 + 0x6c8);
  *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_1 + 0x6e0);
  *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xad0);
  *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(param_1 + 0xae8);
  *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xb00);
  *(undefined8 *)(param_1 + 0xb20) = *(undefined8 *)(param_1 + 0xb18);
  return;
}

