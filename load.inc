BaseOfLoader		equ	09000h		   ; LOADER.BIN 被加载到的位置 ----  段地址
OffsetOfLoader		equ	0100h	  	   ; LOADER.BIN 被加载到的位置 ---- 偏移地址
phyBaseOfLoader		equ	BaseOfLoader * 10h ; the physical address of LOADER.BIN

BaseOfKernelFile	equ	 08000h	       	   ; KERNEL.BIN 被加载到的位置 ----  段地址
OffsetOfKernelFile	equ	     0h		   ; KERNEL.BIN 被加载到的位置 ---- 偏移地址
