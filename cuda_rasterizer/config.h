/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#ifndef CUDA_RASTERIZER_CONFIG_H_INCLUDED
#define CUDA_RASTERIZER_CONFIG_H_INCLUDED

#define NUM_CHANNELS 18 // Default 3, RGB; 18 for 2DGS deferred shading (kd: 3 + ks: 3 + alpha_asg: 8 + local_q: 4 = 18)
#define BLOCK_X 16
#define BLOCK_Y 16

#endif