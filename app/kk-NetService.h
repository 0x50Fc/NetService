//
//  kk-NetService.h
//  KKNetService
//
//  Created by hailong11 on 2018/4/13.
//  Copyright © 2018年 kkmofang.cn. All rights reserved.
//

#ifndef kk_NetService_h
#define kk_NetService_h

#ifdef __cplusplus
extern "C" {
#endif
    
    struct KKNetService {
        char domain[128];
        char name[256];
        char type[128];
    };
    
    
#ifdef __cplusplus
}
#endif
        

#endif /* kk_NetService_h */
