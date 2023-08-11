import Layout from '../../../../components/layouts/child'
import Xarrow, { Xwrapper } from 'react-xarrows'
import {
    Container, Box, Stack, Button,
    Slider,
    SliderTrack,
    SliderFilledTrack,
    SliderThumb,
    SliderMark,
    useColorModeValue,
    Heading
} from '@chakra-ui/react'
import { useRef, useEffect, useState } from 'react'
import { Row, Col } from 'react-grid-system'
import styled from '@emotion/styled'
import React from "react" 
React.useLayoutEffect = React.useEffect 

const Square = (size, num, numSqs, color) => {
    return (
        <div
          style={{
            borderStyle: "solid",
            borderWidth: 1,
            alignItems: "center",
            justifyContent: "center",
            width: size,
            height: size,
            padding: 0,
            backgroundColor: color
          }}
          id={`${numSqs}-sq${num}`}
        ></div>
    )
}

const boards = [
    // 6
    [
        [0, 15, 12, 29, 2, 21],
        [13, 30, 1, 22, 11, 28],
        [16, 35, 14, 27, 20, 3],
        [31, 6, 33, 10, 23, 26],
        [34, 17, 8, 25, 4, 19],
        [7, 32, 5, 18, 9, 24],
    ],
    // 8
    [
        [0, 59, 14, 23, 46, 35, 12, 25],
        [15, 22, 63, 58, 13, 24, 37, 34],
        [62, 1, 60, 45, 36, 47, 26, 11],
        [21, 16, 55, 48, 57, 50, 33, 38],
        [2, 61, 20, 51, 44, 39, 10, 27],
        [17, 54, 43, 56, 49, 30, 7, 32],
        [42, 3, 52, 19, 40, 5, 28, 9],
        [53, 18, 41, 4, 29, 8, 31, 6],
    ],
    // 10
    [
        [0, 47, 32, 35, 98, 45, 62, 37, 96, 93],
        [33, 30, 99, 46, 63, 36, 97, 94, 13, 38],
        [48, 1, 34, 31, 44, 75, 66, 61, 92, 95],
        [29, 26, 49, 74, 59, 64, 43, 14, 39, 12],
        [2, 71, 28, 57, 76, 67, 60, 65, 42, 91],
        [27, 50, 25, 70, 73, 58, 15, 20, 11, 40],
        [24, 3, 72, 77, 56, 21, 68, 41, 90, 9],
        [51, 78, 53, 22, 69, 16, 19, 10, 87, 84],
        [4, 23, 80, 17, 6, 55, 82, 85, 8, 89],
        [79, 52, 5, 54, 81, 18, 7, 88, 83, 86],
    ],
    // 12
    [
        [25, 10, 13, 32, 23, 4, 53, 38, 41, 60, 51, 68],
        [12, 31, 24, 3, 14, 33, 40, 59, 52, 67, 42, 61],
        [9, 26, 11, 34, 5, 22, 37, 54, 39, 62, 69, 50],
        [30, 19, 28, 15, 2, 35, 58, 47, 56, 43, 66, 63],
        [27, 8, 17, 0, 21, 6, 55, 36, 45, 64, 49, 70],
        [18, 29, 20, 7, 16, 1, 46, 57, 48, 71, 44, 65],
        [141, 120, 117, 134, 143, 126, 107, 86, 83, 100, 73, 92],
        [118, 135, 142, 127, 116, 133, 84, 101, 72, 93, 82, 99],
        [121, 140, 119, 132, 125, 108, 87, 106, 85, 98, 91, 74],
        [136, 111, 138, 115, 128, 131, 102, 77, 104, 81, 94, 97],
        [139, 122, 113, 130, 109, 124, 105, 88, 79, 96, 75, 90],
        [112, 137, 110, 123, 114, 129, 78, 103, 76, 89, 80, 95],
    ],
    // 14
    [
        [11, 26, 23, 4, 13, 32, 77, 68, 47, 38, 57, 64, 49, 40],
        [24, 5, 12, 33, 22, 3, 46, 37, 76, 67, 48, 39, 56, 65],
        [27, 10, 25, 2, 31, 14, 69, 78, 45, 58, 63, 66, 41, 50],
        [6, 17, 8, 21, 34, 1, 36, 75, 82, 79, 72, 53, 60, 55],
        [9, 28, 19, 0, 15, 30, 81, 70, 73, 44, 59, 62, 51, 42],
        [18, 7, 16, 29, 20, 35, 74, 83, 80, 71, 52, 43, 54, 61],
        [151, 182, 159, 192, 195, 154, 125, 120, 139, 84, 107, 96, 137, 86],
        [160, 191, 150, 153, 158, 193, 140, 147, 124, 119, 138, 85, 98, 95],
        [181, 152, 183, 194, 155, 148, 123, 126, 121, 106, 97, 108, 87, 136],
        [190, 161, 170, 149, 184, 157, 146, 141, 116, 109, 118, 111, 94, 99],
        [171, 180, 165, 156, 169, 176, 127, 122, 145, 112, 105, 100, 135, 88],
        [164, 189, 162, 175, 166, 185, 142, 115, 104, 117, 110, 91, 132, 93],
        [179, 172, 187, 168, 177, 174, 103, 128, 113, 144, 101, 130, 89, 134],
        [188, 163, 178, 173, 186, 167, 114, 143, 102, 129, 90, 133, 92, 131],
    ],
    // 16
    [
        [36, 31, 50, 59, 18, 7, 48, 61, 74, 69, 88, 97, 120, 109, 86, 99],
        [51, 58, 35, 30, 49, 60, 9, 6, 89, 96, 73, 68, 87, 98, 111, 108],
        [34, 37, 32, 17, 8, 19, 62, 47, 72, 75, 70, 119, 110, 121, 100, 85],
        [57, 52, 27, 20, 29, 22, 5, 10, 95, 90, 65, 122, 67, 124, 107, 112],
        [38, 33, 56, 23, 16, 11, 46, 63, 76, 71, 94, 125, 118, 113, 84, 101],
        [53, 26, 15, 28, 21, 2, 43, 4, 91, 64, 117, 66, 123, 104, 81, 106],
        [14, 39, 24, 55, 12, 41, 0, 45, 116, 77, 126, 93, 114, 79, 102, 83],
        [25, 54, 13, 40, 1, 44, 3, 42, 127, 92, 115, 78, 103, 82, 105, 80],
        [230, 225, 244, 253, 212, 201, 242, 255, 142, 147, 128, 183, 160, 171, 130, 181],
        [245, 252, 229, 224, 243, 254, 203, 200, 191, 184, 143, 148, 129, 182, 169, 172],
        [228, 231, 226, 211, 202, 213, 192, 241, 144, 141, 146, 161, 170, 159, 180, 131],
        [251, 246, 221, 214, 223, 216, 199, 204, 185, 190, 151, 158, 149, 156, 173, 168],
        [232, 227, 250, 217, 210, 205, 240, 193, 140, 145, 186, 155, 162, 167, 132, 179],
        [247, 220, 209, 222, 215, 196, 237, 198, 189, 152, 163, 150, 157, 176, 135, 174],
        [208, 233, 218, 249, 206, 235, 194, 239, 164, 139, 154, 187, 166, 137, 178, 133],
        [219, 248, 207, 234, 195, 238, 197, 236, 153, 188, 165, 138, 177, 134, 175, 136],
    ],
    // 18
    [
        [36, 31, 50, 59, 18, 7, 48, 61, 82, 127, 118, 67, 84, 129, 116, 69, 86, 89],
        [51, 58, 35, 30, 49, 60, 9, 6, 119, 66, 83, 128, 117, 68, 85, 88, 115, 70],
        [34, 37, 32, 17, 8, 19, 62, 47, 126, 81, 120, 105, 130, 99, 112, 133, 90, 87],
        [57, 52, 27, 20, 29, 22, 5, 10, 65, 104, 125, 102, 111, 96, 131, 100, 71, 114],
        [38, 33, 56, 23, 16, 11, 46, 63, 80, 121, 106, 95, 98, 101, 134, 113, 132, 91],
        [53, 26, 15, 28, 21, 2, 43, 4, 107, 64, 103, 124, 135, 110, 97, 74, 139, 72],
        [14, 39, 24, 55, 12, 41, 0, 45, 122, 79, 142, 109, 94, 77, 140, 137, 92, 75],
        [25, 54, 13, 40, 1, 44, 3, 42, 143, 108, 123, 78, 141, 136, 93, 76, 73, 138],
        [304, 267, 260, 321, 306, 279, 264, 323, 176, 229, 144, 241, 178, 231, 214, 239, 180, 183],
        [259, 320, 305, 282, 265, 322, 307, 278, 243, 146, 177, 230, 213, 240, 179, 182, 163, 238],
        [268, 303, 266, 261, 280, 283, 244, 263, 228, 175, 242, 145, 232, 201, 210, 215, 184, 181],
        [319, 258, 281, 284, 291, 262, 277, 308, 147, 150, 227, 202, 217, 212, 233, 162, 237, 164],
        [302, 269, 256, 275, 288, 251, 292, 245, 174, 205, 148, 219, 200, 209, 216, 211, 234, 185],
        [257, 318, 287, 290, 285, 276, 309, 250, 149, 226, 151, 206, 203, 218, 161, 156, 165, 236],
        [270, 301, 274, 255, 252, 289, 246, 293, 152, 173, 204, 199, 220, 155, 208, 235, 186, 167],
        [317, 298, 253, 286, 273, 312, 249, 310, 225, 198, 223, 154, 207, 160, 157, 166, 189, 192],
        [300, 271, 296, 315, 254, 247, 294, 313, 172, 153, 196, 159, 170, 221, 194, 191, 168, 187],
        [297, 316, 299, 272, 295, 314, 311, 248, 197, 224, 171, 222, 195, 158, 169, 188, 193, 190],
    ],
    // 20
    [
        [83, 36, 51, 48, 85, 38, 21, 46, 87, 90, 179, 132, 147, 144, 181, 134, 117, 142, 183, 186],
        [50, 53, 84, 37, 20, 47, 86, 89, 70, 45, 146, 149, 180, 133, 116, 143, 182, 185, 166, 141],
        [35, 82, 49, 52, 39, 8, 17, 22, 91, 88, 131, 178, 145, 148, 135, 104, 113, 118, 187, 184],
        [54, 57, 34, 9, 24, 19, 40, 69, 44, 71, 150, 153, 130, 105, 120, 115, 136, 165, 140, 167],
        [81, 12, 55, 26, 7, 16, 23, 18, 41, 92, 177, 108, 151, 122, 103, 112, 119, 114, 137, 188],
        [56, 33, 58, 13, 10, 25, 68, 63, 72, 43, 152, 129, 154, 109, 106, 121, 164, 159, 168, 139],
        [59, 80, 11, 6, 27, 62, 15, 42, 93, 74, 155, 176, 107, 102, 123, 158, 111, 138, 189, 170],
        [32, 5, 30, 61, 14, 67, 64, 73, 96, 99, 128, 101, 126, 157, 110, 163, 160, 169, 192, 195],
        [79, 60, 3, 66, 77, 28, 1, 98, 75, 94, 175, 156, 199, 162, 173, 124, 197, 194, 171, 190],
        [4, 31, 78, 29, 2, 65, 76, 95, 0, 97, 100, 127, 174, 125, 198, 161, 172, 191, 196, 193],
        [361, 308, 393, 396, 359, 306, 323, 398, 357, 354, 247, 200, 215, 212, 249, 202, 285, 210, 251, 254],
        [394, 391, 360, 307, 324, 397, 358, 355, 374, 399, 214, 217, 248, 201, 284, 211, 250, 253, 234, 209],
        [309, 362, 395, 392, 305, 336, 327, 322, 353, 356, 299, 246, 213, 216, 203, 272, 281, 286, 255, 252],
        [390, 387, 310, 335, 320, 325, 304, 375, 300, 373, 218, 221, 298, 273, 288, 283, 204, 233, 208, 235],
        [363, 332, 389, 318, 337, 328, 321, 326, 303, 352, 245, 276, 219, 290, 271, 280, 287, 282, 205, 256],
        [388, 311, 386, 331, 334, 319, 376, 381, 372, 301, 220, 297, 222, 277, 274, 289, 232, 227, 236, 207],
        [385, 364, 333, 338, 317, 382, 329, 302, 351, 370, 223, 244, 275, 270, 291, 226, 279, 206, 257, 238],
        [312, 339, 314, 383, 330, 377, 380, 371, 348, 345, 296, 269, 294, 225, 278, 231, 228, 237, 260, 263],
        [365, 384, 341, 378, 367, 316, 343, 346, 369, 350, 243, 224, 267, 230, 241, 292, 265, 262, 239, 258],
        [340, 313, 366, 315, 342, 379, 368, 349, 344, 347, 268, 295, 242, 293, 266, 229, 240, 259, 264, 261],
    ],
    // 22
    [
        [89, 42, 57, 54, 91, 44, 27, 52, 93, 96, 107, 110, 105, 206, 171, 112, 175, 208, 177, 114, 181, 210],
        [56, 59, 90, 43, 26, 53, 92, 95, 76, 51, 104, 205, 108, 111, 174, 207, 148, 113, 134, 209, 178, 115],
        [41, 88, 55, 58, 45, 14, 23, 28, 97, 94, 109, 106, 203, 170, 147, 172, 131, 176, 145, 180, 211, 182],
        [60, 63, 40, 15, 30, 25, 46, 75, 50, 77, 204, 103, 154, 173, 168, 149, 146, 133, 166, 135, 116, 179],
        [87, 18, 61, 32, 13, 22, 29, 24, 47, 98, 199, 202, 169, 150, 153, 132, 167, 130, 139, 144, 183, 212],
        [62, 39, 64, 19, 16, 31, 74, 69, 78, 49, 102, 157, 200, 155, 126, 129, 152, 143, 136, 165, 140, 117],
        [65, 86, 17, 12, 33, 68, 21, 48, 99, 80, 201, 198, 101, 158, 151, 160, 127, 138, 141, 186, 213, 184],
        [38, 11, 36, 67, 20, 73, 70, 79, 2, 5, 100, 195, 156, 125, 128, 191, 142, 161, 164, 137, 118, 187],
        [85, 66, 9, 72, 83, 34, 7, 4, 81, 0, 197, 124, 193, 218, 159, 122, 163, 216, 189, 120, 185, 214],
        [10, 37, 84, 35, 8, 71, 82, 1, 6, 3, 194, 219, 196, 123, 192, 217, 190, 121, 162, 215, 188, 119],
        [453, 456, 451, 476, 481, 458, 479, 460, 483, 366, 357, 342, 345, 220, 355, 336, 241, 226, 229, 248, 239, 256],
        [450, 475, 454, 457, 478, 403, 482, 365, 436, 461, 344, 363, 356, 335, 346, 221, 228, 247, 240, 255, 230, 249],
        [455, 452, 477, 406, 391, 480, 459, 404, 367, 364, 341, 358, 343, 222, 337, 354, 225, 242, 227, 250, 257, 238],
        [474, 449, 390, 387, 410, 405, 402, 435, 462, 437, 362, 351, 360, 347, 334, 223, 246, 235, 244, 231, 254, 251],
        [389, 386, 413, 392, 407, 434, 409, 432, 401, 368, 359, 340, 349, 332, 353, 338, 243, 224, 233, 252, 237, 258],
        [448, 473, 388, 411, 428, 431, 400, 369, 438, 463, 350, 361, 352, 339, 348, 333, 234, 245, 236, 259, 232, 253],
        [385, 412, 429, 414, 393, 408, 433, 418, 397, 370, 329, 308, 305, 322, 331, 314, 295, 274, 271, 288, 261, 280],
        [472, 447, 384, 427, 430, 417, 422, 399, 464, 439, 306, 323, 330, 315, 304, 321, 272, 289, 260, 281, 270, 287],
        [383, 426, 415, 394, 421, 424, 419, 396, 371, 398, 309, 328, 307, 320, 313, 296, 275, 294, 273, 286, 279, 262],
        [446, 471, 380, 425, 416, 395, 374, 423, 440, 465, 324, 299, 326, 303, 316, 319, 290, 265, 292, 269, 282, 285],
        [379, 382, 469, 444, 377, 420, 467, 442, 375, 372, 327, 310, 301, 318, 297, 312, 293, 276, 267, 284, 263, 278],
        [470, 445, 378, 381, 468, 443, 376, 373, 466, 441, 300, 325, 298, 311, 302, 317, 266, 291, 264, 277, 268, 283],
    ],
    // 24
    [
        [71, 86, 83, 64, 73, 92, 43, 58, 55, 36, 45, 28, 241, 256, 253, 234, 243, 262, 213, 228, 225, 206, 215, 198],
        [84, 65, 72, 93, 82, 63, 56, 37, 44, 29, 54, 35, 254, 235, 242, 263, 252, 233, 226, 207, 214, 199, 224, 205],
        [87, 70, 85, 62, 91, 74, 59, 42, 57, 34, 27, 46, 257, 240, 255, 232, 261, 244, 229, 212, 227, 204, 197, 216],
        [66, 77, 68, 81, 94, 61, 38, 49, 40, 53, 30, 33, 236, 247, 238, 251, 264, 231, 208, 219, 210, 223, 200, 203],
        [69, 88, 79, 96, 75, 90, 41, 60, 51, 32, 47, 26, 239, 258, 249, 266, 245, 260, 211, 230, 221, 202, 217, 196],
        [78, 67, 76, 89, 80, 95, 50, 39, 48, 25, 52, 31, 248, 237, 246, 259, 250, 265, 220, 209, 218, 195, 222, 201],
        [99, 120, 123, 106, 97, 114, 133, 10, 13, 140, 23, 4, 269, 146, 149, 276, 267, 284, 159, 180, 183, 166, 193, 174],
        [122, 105, 98, 113, 124, 107, 12, 139, 24, 3, 14, 141, 148, 275, 268, 283, 150, 277, 182, 165, 194, 173, 184, 167],
        [119, 100, 121, 108, 115, 132, 9, 134, 11, 142, 5, 22, 145, 270, 147, 278, 285, 158, 179, 160, 181, 168, 175, 192],
        [104, 129, 102, 125, 112, 109, 138, 19, 136, 15, 2, 143, 274, 155, 272, 151, 282, 279, 164, 189, 162, 185, 172, 169],
        [101, 118, 127, 110, 131, 116, 135, 8, 17, 0, 21, 6, 271, 144, 153, 280, 157, 286, 161, 178, 187, 170, 191, 176],
        [128, 103, 130, 117, 126, 111, 18, 137, 20, 7, 16, 1, 154, 273, 156, 287, 152, 281, 188, 163, 190, 177, 186, 171],
        [457, 472, 469, 450, 459, 478, 573, 444, 441, 566, 575, 558, 431, 302, 299, 424, 289, 308, 403, 418, 415, 396, 405, 388],
        [470, 451, 458, 479, 468, 449, 442, 567, 574, 559, 440, 565, 300, 425, 288, 309, 298, 423, 416, 397, 404, 389, 414, 395],
        [473, 456, 471, 448, 477, 460, 445, 572, 443, 564, 557, 432, 303, 430, 301, 422, 307, 290, 419, 402, 417, 394, 387, 406],
        [452, 463, 454, 467, 480, 447, 568, 435, 570, 439, 560, 563, 426, 293, 428, 297, 310, 421, 398, 409, 400, 413, 390, 393],
        [455, 474, 465, 482, 461, 476, 571, 446, 437, 562, 433, 556, 429, 304, 295, 312, 291, 306, 401, 420, 411, 392, 407, 386],
        [464, 453, 462, 475, 466, 481, 436, 569, 434, 555, 438, 561, 294, 427, 292, 305, 296, 311, 410, 399, 408, 385, 412, 391],
        [485, 506, 509, 492, 483, 500, 519, 540, 543, 526, 553, 534, 315, 336, 339, 322, 313, 330, 349, 370, 373, 356, 383, 364],
        [508, 491, 484, 499, 510, 493, 542, 525, 554, 533, 544, 527, 338, 321, 314, 329, 340, 323, 372, 355, 384, 363, 374, 357],
        [505, 486, 507, 494, 501, 518, 539, 520, 541, 528, 535, 552, 335, 316, 337, 324, 331, 348, 369, 350, 371, 358, 365, 382],
        [490, 515, 488, 511, 498, 495, 524, 549, 522, 545, 532, 529, 320, 345, 318, 341, 328, 325, 354, 379, 352, 375, 362, 359],
        [487, 504, 513, 496, 517, 502, 521, 538, 547, 530, 551, 536, 317, 334, 343, 326, 347, 332, 351, 368, 377, 360, 381, 366],
        [514, 489, 516, 503, 512, 497, 548, 523, 550, 537, 546, 531, 344, 319, 346, 333, 342, 327, 378, 353, 380, 367, 376, 361],
    ],
    // 26
    [
        [71, 86, 83, 64, 73, 92, 43, 58, 55, 36, 45, 28, 265, 280, 277, 258, 267, 286, 213, 252, 231, 222, 241, 248, 233, 224],
        [84, 65, 72, 93, 82, 63, 56, 37, 44, 29, 54, 35, 278, 259, 266, 287, 276, 257, 230, 221, 212, 251, 232, 223, 240, 249],
        [87, 70, 85, 62, 91, 74, 59, 42, 57, 34, 27, 46, 281, 264, 279, 256, 285, 268, 253, 214, 229, 242, 247, 250, 225, 234],
        [66, 77, 68, 81, 94, 61, 38, 49, 40, 53, 30, 33, 260, 271, 262, 275, 288, 255, 220, 211, 218, 215, 208, 237, 244, 239],
        [69, 88, 79, 96, 75, 90, 41, 60, 51, 32, 47, 26, 263, 282, 273, 290, 269, 284, 217, 254, 209, 228, 243, 246, 235, 226],
        [78, 67, 76, 89, 80, 95, 50, 39, 48, 25, 52, 31, 272, 261, 270, 283, 274, 289, 210, 219, 216, 207, 236, 227, 238, 245],
        [99, 120, 123, 106, 97, 114, 133, 10, 13, 140, 23, 4, 293, 146, 149, 300, 291, 308, 205, 166, 187, 196, 177, 170, 185, 194],
        [122, 105, 98, 113, 124, 107, 12, 139, 24, 3, 14, 141, 148, 299, 292, 307, 150, 301, 188, 197, 206, 167, 186, 195, 178, 169],
        [119, 100, 121, 108, 115, 132, 9, 134, 11, 142, 5, 22, 145, 294, 147, 302, 309, 158, 165, 204, 189, 176, 171, 168, 193, 184],
        [104, 129, 102, 125, 112, 109, 138, 19, 136, 15, 2, 143, 298, 155, 296, 151, 306, 303, 198, 159, 200, 203, 162, 181, 174, 179],
        [101, 118, 127, 110, 131, 116, 135, 8, 17, 0, 21, 6, 295, 144, 153, 304, 157, 310, 201, 164, 161, 190, 175, 172, 183, 192],
        [128, 103, 130, 117, 126, 111, 18, 137, 20, 7, 16, 1, 154, 297, 156, 311, 152, 305, 160, 199, 202, 163, 182, 191, 180, 173],
        [533, 548, 545, 526, 535, 554, 673, 520, 517, 666, 675, 658, 507, 326, 323, 500, 313, 332, 377, 368, 347, 338, 357, 364, 349, 340],
        [546, 527, 534, 555, 544, 525, 518, 667, 674, 659, 516, 665, 324, 501, 312, 333, 322, 499, 346, 337, 376, 367, 348, 339, 356, 365],
        [549, 532, 547, 524, 553, 536, 521, 672, 519, 664, 657, 508, 327, 506, 325, 498, 331, 314, 369, 378, 345, 358, 363, 366, 341, 350],
        [528, 539, 530, 543, 556, 523, 668, 511, 670, 515, 660, 663, 502, 317, 504, 321, 334, 497, 336, 375, 382, 379, 372, 353, 360, 355],
        [531, 550, 541, 558, 537, 552, 671, 522, 513, 662, 509, 656, 505, 328, 319, 496, 315, 330, 381, 370, 373, 344, 359, 362, 351, 342],
        [540, 529, 538, 551, 542, 557, 512, 669, 510, 655, 514, 661, 318, 503, 316, 329, 320, 335, 374, 383, 380, 371, 352, 343, 354, 361],
        [603, 572, 595, 562, 559, 600, 607, 638, 615, 648, 651, 610, 451, 482, 459, 492, 495, 454, 425, 420, 439, 384, 407, 396, 437, 386],
        [594, 563, 604, 601, 596, 561, 616, 647, 654, 609, 614, 649, 460, 491, 450, 453, 458, 493, 440, 447, 424, 419, 438, 385, 398, 395],
        [573, 602, 571, 560, 599, 606, 637, 608, 639, 650, 611, 652, 481, 452, 483, 494, 455, 448, 423, 426, 421, 406, 397, 408, 387, 436],
        [564, 593, 584, 605, 570, 597, 646, 617, 626, 653, 640, 613, 490, 461, 470, 449, 484, 457, 446, 441, 416, 409, 418, 411, 394, 399],
        [583, 574, 589, 598, 585, 578, 627, 636, 621, 612, 625, 632, 471, 480, 465, 456, 469, 476, 427, 422, 445, 412, 405, 400, 435, 388],
        [590, 565, 592, 579, 588, 569, 620, 645, 618, 631, 622, 641, 464, 489, 462, 475, 466, 485, 442, 415, 404, 417, 410, 391, 432, 393],
        [575, 582, 567, 586, 577, 580, 635, 628, 643, 624, 633, 630, 479, 472, 487, 468, 477, 474, 403, 428, 413, 444, 401, 430, 389, 434],
        [566, 591, 576, 581, 568, 587, 644, 619, 634, 629, 642, 623, 488, 463, 478, 473, 486, 467, 414, 443, 402, 429, 390, 433, 392, 431],
    ],
    // 28
    [
        [123, 108, 111, 130, 121, 102, 57, 66, 87, 96, 77, 70, 85, 94, 239, 254, 251, 232, 241, 260, 305, 296, 275, 266, 285, 292, 277, 268],
        [110, 129, 122, 101, 112, 131, 88, 97, 58, 67, 86, 95, 78, 69, 252, 233, 240, 261, 250, 231, 274, 265, 304, 295, 276, 267, 284, 293],
        [107, 124, 109, 132, 103, 120, 65, 56, 89, 76, 71, 68, 93, 84, 255, 238, 253, 230, 259, 242, 297, 306, 273, 286, 291, 294, 269, 278],
        [128, 117, 126, 113, 100, 133, 98, 59, 52, 55, 62, 81, 74, 79, 234, 245, 236, 249, 262, 229, 264, 303, 310, 307, 300, 281, 288, 283],
        [125, 106, 115, 134, 119, 104, 53, 64, 61, 90, 75, 72, 83, 92, 237, 256, 247, 228, 243, 258, 309, 298, 301, 272, 287, 290, 279, 270],
        [116, 127, 118, 105, 114, 99, 60, 51, 54, 63, 82, 91, 80, 73, 246, 235, 244, 257, 248, 263, 302, 311, 308, 299, 280, 271, 282, 289],
        [179, 148, 171, 138, 135, 176, 9, 14, 191, 50, 27, 38, 193, 48, 379, 214, 387, 224, 227, 382, 353, 348, 367, 312, 335, 324, 365, 314],
        [170, 139, 180, 177, 172, 137, 190, 183, 10, 15, 192, 49, 36, 39, 388, 223, 378, 381, 386, 225, 368, 375, 352, 347, 366, 313, 326, 323],
        [149, 178, 147, 136, 175, 182, 11, 8, 13, 28, 37, 26, 47, 194, 213, 380, 215, 226, 383, 376, 351, 354, 349, 334, 325, 336, 315, 364],
        [140, 169, 160, 181, 146, 173, 184, 189, 18, 25, 16, 23, 40, 35, 222, 389, 202, 377, 216, 385, 374, 369, 344, 337, 346, 339, 322, 327],
        [159, 150, 165, 174, 161, 154, 7, 12, 185, 22, 29, 34, 195, 46, 203, 212, 197, 384, 201, 208, 355, 350, 373, 340, 333, 328, 363, 316],
        [166, 141, 168, 155, 164, 145, 188, 19, 30, 17, 24, 43, 2, 41, 196, 221, 390, 207, 198, 217, 370, 343, 332, 345, 338, 319, 360, 321],
        [151, 158, 143, 162, 153, 156, 31, 6, 21, 186, 33, 4, 45, 0, 211, 204, 219, 200, 209, 206, 331, 356, 341, 372, 329, 358, 317, 362],
        [142, 167, 152, 157, 144, 163, 20, 187, 32, 5, 44, 1, 42, 3, 220, 391, 210, 205, 218, 199, 342, 371, 330, 357, 318, 361, 320, 359],
        [745, 760, 757, 738, 747, 766, 615, 606, 781, 772, 595, 602, 783, 774, 581, 566, 569, 392, 579, 560, 515, 524, 545, 554, 535, 528, 543, 552],
        [758, 739, 746, 767, 756, 737, 780, 771, 614, 605, 782, 773, 594, 603, 568, 587, 580, 559, 570, 393, 546, 555, 516, 525, 544, 553, 536, 527],
        [761, 744, 759, 736, 765, 748, 607, 616, 779, 596, 601, 604, 775, 588, 565, 582, 567, 394, 561, 578, 523, 514, 547, 534, 529, 526, 551, 542],
        [740, 751, 742, 755, 768, 735, 770, 613, 620, 617, 610, 591, 598, 593, 586, 575, 584, 571, 558, 395, 556, 517, 510, 513, 520, 539, 532, 537],
        [743, 762, 753, 734, 749, 764, 619, 608, 611, 778, 597, 600, 589, 776, 583, 564, 573, 396, 577, 562, 511, 522, 519, 548, 533, 530, 541, 550],
        [752, 741, 750, 763, 754, 769, 612, 621, 618, 609, 590, 777, 592, 599, 574, 585, 576, 563, 572, 557, 518, 509, 512, 521, 540, 549, 538, 531],
        [689, 720, 697, 730, 733, 692, 663, 658, 677, 622, 645, 634, 675, 624, 441, 410, 433, 400, 397, 438, 467, 472, 453, 508, 485, 496, 455, 506],
        [698, 729, 688, 691, 696, 731, 678, 685, 662, 657, 676, 623, 636, 633, 432, 401, 442, 439, 434, 399, 452, 445, 468, 473, 454, 507, 494, 497],
        [719, 690, 721, 732, 693, 686, 661, 664, 659, 644, 635, 646, 625, 674, 411, 440, 409, 398, 437, 444, 469, 466, 471, 486, 495, 484, 505, 456],
        [728, 699, 708, 687, 722, 695, 684, 679, 654, 647, 656, 649, 632, 637, 402, 431, 422, 443, 408, 435, 446, 451, 476, 483, 474, 481, 498, 493],
        [709, 718, 703, 694, 707, 714, 665, 660, 683, 650, 643, 638, 673, 626, 421, 412, 427, 436, 423, 416, 465, 470, 447, 480, 487, 492, 457, 504],
        [702, 727, 700, 713, 704, 723, 680, 653, 642, 655, 648, 629, 670, 631, 428, 403, 430, 417, 426, 407, 450, 477, 488, 475, 482, 501, 460, 499],
        [717, 710, 725, 706, 715, 712, 641, 666, 651, 682, 639, 668, 627, 672, 413, 420, 405, 424, 415, 418, 489, 464, 479, 448, 491, 462, 503, 458],
        [726, 701, 716, 711, 724, 705, 652, 681, 640, 667, 628, 671, 630, 669, 404, 429, 414, 419, 406, 425, 478, 449, 490, 463, 502, 459, 500, 461],
    ],
    // 30
    [
        [123, 108, 111, 130, 121, 102, 57, 66, 87, 96, 77, 70, 85, 94, 259, 250, 277, 268, 287, 246, 279, 270, 335, 326, 305, 296, 315, 322, 307, 298],
        [110, 129, 122, 101, 112, 131, 88, 97, 58, 67, 86, 95, 78, 69, 276, 267, 258, 249, 278, 269, 286, 247, 304, 295, 334, 325, 306, 297, 314, 323],
        [107, 124, 109, 132, 103, 120, 65, 56, 89, 76, 71, 68, 93, 84, 251, 260, 275, 288, 245, 248, 271, 280, 327, 336, 303, 316, 321, 324, 299, 308],
        [128, 117, 126, 113, 100, 133, 98, 59, 52, 55, 62, 81, 74, 79, 266, 257, 264, 261, 254, 283, 290, 285, 294, 333, 292, 337, 330, 311, 318, 313],
        [125, 106, 115, 134, 119, 104, 53, 64, 61, 90, 75, 72, 83, 92, 263, 252, 255, 274, 289, 244, 281, 272, 291, 328, 331, 302, 317, 320, 309, 300],
        [116, 127, 118, 105, 114, 99, 60, 51, 54, 63, 82, 91, 80, 73, 256, 265, 262, 253, 282, 273, 284, 243, 332, 293, 338, 329, 310, 301, 312, 319],
        [179, 148, 171, 138, 135, 176, 9, 14, 191, 50, 27, 38, 193, 48, 213, 218, 199, 414, 231, 242, 201, 412, 397, 402, 383, 374, 351, 362, 385, 372],
        [170, 139, 180, 177, 172, 137, 190, 183, 10, 15, 192, 49, 36, 39, 198, 415, 214, 219, 200, 413, 240, 403, 382, 375, 398, 339, 384, 373, 360, 363],
        [149, 178, 147, 136, 175, 182, 11, 8, 13, 28, 37, 26, 47, 194, 215, 212, 217, 232, 241, 230, 411, 202, 399, 396, 401, 352, 361, 350, 371, 386],
        [140, 169, 160, 181, 146, 173, 184, 189, 18, 25, 16, 23, 40, 35, 416, 197, 222, 229, 220, 227, 404, 239, 376, 381, 342, 349, 340, 347, 364, 359],
        [159, 150, 165, 174, 161, 154, 7, 12, 185, 22, 29, 34, 195, 46, 211, 216, 417, 226, 233, 238, 203, 410, 395, 400, 377, 346, 353, 358, 387, 370],
        [166, 141, 168, 155, 164, 145, 188, 19, 30, 17, 24, 43, 2, 41, 196, 223, 234, 221, 228, 407, 206, 405, 380, 343, 354, 341, 348, 367, 390, 365],
        [151, 158, 143, 162, 153, 156, 31, 6, 21, 186, 33, 4, 45, 0, 235, 210, 225, 418, 237, 208, 409, 204, 355, 394, 345, 378, 357, 392, 369, 388],
        [142, 167, 152, 157, 144, 163, 20, 187, 32, 5, 44, 1, 42, 3, 224, 419, 236, 209, 408, 205, 406, 207, 344, 379, 356, 393, 368, 389, 366, 391],
        [725, 742, 717, 732, 729, 722, 687, 692, 897, 888, 705, 876, 899, 886, 653, 648, 667, 420, 635, 624, 665, 422, 435, 430, 449, 458, 481, 470, 447, 460],
        [716, 733, 726, 723, 718, 731, 896, 889, 688, 693, 898, 887, 874, 877, 668, 675, 652, 647, 666, 421, 626, 623, 450, 457, 434, 429, 448, 459, 472, 469],
        [743, 724, 741, 730, 721, 728, 689, 686, 691, 706, 875, 704, 885, 676, 651, 654, 649, 634, 625, 636, 423, 664, 433, 436, 431, 480, 471, 482, 461, 446],
        [734, 715, 754, 727, 740, 719, 890, 895, 696, 703, 694, 701, 878, 873, 674, 669, 644, 637, 646, 639, 622, 627, 456, 451, 426, 483, 428, 485, 468, 473],
        [753, 744, 711, 720, 755, 748, 685, 690, 891, 700, 707, 872, 677, 884, 655, 650, 673, 640, 633, 628, 663, 424, 437, 432, 455, 486, 479, 474, 445, 462],
        [712, 735, 714, 749, 710, 739, 894, 697, 708, 695, 702, 881, 680, 879, 670, 643, 632, 645, 638, 619, 660, 621, 452, 425, 478, 427, 484, 465, 442, 467],
        [745, 752, 737, 756, 747, 750, 709, 684, 699, 892, 871, 682, 883, 678, 631, 656, 641, 672, 629, 658, 617, 662, 477, 438, 487, 454, 475, 440, 463, 444],
        [736, 713, 746, 751, 738, 757, 698, 893, 870, 683, 882, 679, 880, 681, 642, 671, 630, 657, 618, 661, 620, 659, 488, 453, 476, 439, 464, 443, 466, 441],
        [799, 768, 791, 758, 803, 796, 811, 806, 825, 834, 857, 846, 823, 836, 591, 586, 605, 614, 573, 562, 603, 616, 503, 508, 489, 544, 521, 532, 491, 542],
        [790, 759, 800, 797, 792, 805, 826, 833, 810, 869, 824, 835, 848, 845, 606, 613, 590, 585, 604, 615, 564, 561, 552, 545, 504, 509, 490, 543, 530, 533],
        [769, 798, 767, 804, 795, 802, 809, 812, 807, 856, 847, 858, 837, 822, 589, 592, 587, 572, 563, 574, 553, 602, 505, 502, 507, 522, 531, 520, 541, 492],
        [760, 789, 780, 801, 766, 793, 832, 827, 866, 859, 868, 861, 844, 849, 612, 607, 582, 575, 584, 577, 560, 565, 546, 551, 512, 519, 510, 517, 534, 529],
        [779, 770, 785, 794, 781, 774, 813, 808, 831, 862, 855, 850, 821, 838, 593, 588, 611, 578, 571, 566, 601, 554, 501, 506, 547, 516, 523, 528, 493, 540],
        [786, 761, 788, 775, 784, 765, 828, 865, 854, 867, 860, 841, 818, 843, 608, 581, 570, 583, 576, 557, 598, 559, 550, 513, 524, 511, 518, 537, 496, 535],
        [771, 778, 763, 782, 773, 776, 853, 814, 863, 830, 851, 816, 839, 820, 569, 594, 579, 610, 567, 596, 555, 600, 525, 500, 515, 548, 527, 498, 539, 494],
        [762, 787, 772, 777, 764, 783, 864, 829, 852, 815, 840, 819, 842, 817, 580, 609, 568, 595, 556, 599, 558, 597, 514, 549, 526, 499, 538, 495, 536, 497],
    ],
    // 32
    [
        [142, 147, 128, 119, 160, 171, 130, 117, 104, 109, 90, 81, 58, 69, 92, 79, 328, 323, 342, 351, 310, 299, 340, 353, 366, 361, 380, 389, 412, 401, 378, 391],
        [127, 120, 143, 148, 129, 118, 169, 172, 89, 82, 105, 110, 91, 80, 67, 70, 343, 350, 327, 322, 341, 352, 301, 298, 381, 388, 365, 360, 379, 390, 403, 400],
        [144, 141, 146, 161, 170, 159, 116, 131, 106, 103, 108, 59, 68, 57, 78, 93, 326, 329, 324, 309, 300, 311, 354, 339, 364, 367, 362, 411, 402, 413, 392, 377],
        [121, 126, 151, 158, 149, 156, 173, 168, 83, 88, 113, 56, 111, 54, 71, 66, 349, 344, 319, 312, 321, 314, 297, 302, 387, 382, 357, 414, 359, 416, 399, 404],
        [140, 145, 122, 155, 162, 167, 132, 115, 102, 107, 84, 53, 60, 65, 94, 77, 330, 325, 348, 315, 308, 303, 338, 355, 368, 363, 386, 417, 410, 405, 376, 393],
        [125, 152, 163, 150, 157, 176, 135, 174, 87, 114, 61, 112, 55, 74, 97, 72, 345, 318, 307, 320, 313, 294, 335, 296, 383, 356, 409, 358, 415, 396, 373, 398],
        [164, 139, 154, 123, 166, 137, 178, 133, 62, 101, 52, 85, 64, 99, 76, 95, 306, 331, 316, 347, 304, 333, 292, 337, 408, 369, 418, 385, 406, 371, 394, 375],
        [153, 124, 165, 138, 177, 134, 175, 136, 51, 86, 63, 100, 75, 96, 73, 98, 317, 346, 305, 332, 293, 336, 295, 334, 419, 384, 407, 370, 395, 374, 397, 372],
        [204, 209, 190, 181, 222, 233, 192, 179, 36, 31, 50, 251, 18, 7, 48, 253, 266, 261, 280, 289, 504, 493, 278, 291, 434, 439, 420, 475, 452, 463, 422, 473],
        [189, 182, 205, 210, 191, 180, 231, 234, 243, 250, 35, 30, 49, 252, 9, 6, 281, 288, 265, 260, 279, 290, 495, 492, 483, 476, 435, 440, 421, 474, 461, 464],
        [206, 203, 208, 223, 232, 221, 242, 193, 34, 37, 32, 17, 8, 19, 254, 47, 264, 267, 262, 503, 494, 505, 484, 277, 436, 433, 438, 453, 462, 451, 472, 423],
        [183, 188, 213, 220, 211, 218, 235, 230, 249, 244, 27, 20, 29, 22, 5, 10, 287, 282, 257, 506, 259, 508, 491, 496, 477, 482, 443, 450, 441, 448, 465, 460],
        [202, 207, 184, 217, 224, 229, 194, 241, 38, 33, 248, 23, 16, 11, 46, 255, 268, 263, 286, 509, 502, 497, 276, 485, 432, 437, 478, 447, 454, 459, 424, 471],
        [187, 214, 225, 212, 219, 238, 197, 236, 245, 26, 15, 28, 21, 2, 43, 4, 283, 256, 501, 258, 507, 488, 273, 490, 481, 444, 455, 442, 449, 468, 427, 466],
        [226, 201, 216, 185, 228, 199, 240, 195, 14, 39, 24, 247, 12, 41, 0, 45, 500, 269, 510, 285, 498, 271, 486, 275, 456, 431, 446, 479, 458, 429, 470, 425],
        [215, 186, 227, 200, 239, 196, 237, 198, 25, 246, 13, 40, 1, 44, 3, 42, 511, 284, 499, 270, 487, 274, 489, 272, 445, 480, 457, 430, 469, 426, 467, 428],
        [960, 955, 974, 983, 942, 931, 972, 985, 998, 993, 1012, 1021, 788, 777, 1010, 1023, 526, 531, 512, 759, 544, 555, 514, 757, 744, 749, 730, 721, 698, 709, 732, 719],
        [975, 982, 959, 954, 973, 984, 933, 930, 1013, 1020, 997, 992, 1011, 1022, 779, 776, 767, 760, 527, 532, 513, 758, 553, 556, 729, 722, 745, 750, 731, 720, 707, 710],
        [958, 961, 956, 941, 932, 943, 986, 971, 996, 999, 994, 787, 778, 789, 768, 1009, 528, 525, 530, 545, 554, 543, 756, 515, 746, 743, 748, 699, 708, 697, 718, 733],
        [981, 976, 951, 944, 953, 946, 929, 934, 1019, 1014, 989, 790, 991, 792, 775, 780, 761, 766, 535, 542, 533, 540, 557, 552, 723, 728, 753, 696, 751, 694, 711, 706],
        [962, 957, 980, 947, 940, 935, 970, 987, 1000, 995, 1018, 793, 786, 781, 1008, 769, 524, 529, 762, 539, 546, 551, 516, 755, 742, 747, 724, 693, 700, 705, 734, 717],
        [977, 950, 939, 952, 945, 926, 967, 928, 1015, 988, 785, 990, 791, 772, 1005, 774, 765, 536, 547, 534, 541, 560, 519, 558, 727, 754, 701, 752, 695, 714, 737, 712],
        [938, 963, 948, 979, 936, 965, 924, 969, 784, 1001, 794, 1017, 782, 1003, 770, 1007, 548, 523, 538, 763, 550, 521, 562, 517, 702, 741, 692, 725, 704, 739, 716, 735],
        [949, 978, 937, 964, 925, 968, 927, 966, 795, 1016, 783, 1002, 771, 1006, 773, 1004, 537, 764, 549, 522, 561, 518, 559, 520, 691, 726, 703, 740, 715, 736, 713, 738],
        [898, 893, 912, 921, 880, 869, 910, 923, 810, 815, 796, 851, 828, 839, 798, 849, 588, 593, 574, 565, 606, 617, 576, 563, 676, 671, 690, 635, 658, 647, 688, 637],
        [913, 920, 897, 892, 911, 922, 871, 868, 859, 852, 811, 816, 797, 850, 837, 840, 573, 566, 589, 594, 575, 564, 615, 618, 627, 634, 675, 670, 689, 636, 649, 646],
        [896, 899, 894, 879, 870, 881, 860, 909, 812, 809, 814, 829, 838, 827, 848, 799, 590, 587, 592, 607, 616, 605, 626, 577, 674, 677, 672, 657, 648, 659, 638, 687],
        [919, 914, 889, 882, 891, 884, 867, 872, 853, 858, 819, 826, 817, 824, 841, 836, 567, 572, 597, 604, 595, 602, 619, 614, 633, 628, 667, 660, 669, 662, 645, 650],
        [900, 895, 918, 885, 878, 873, 908, 861, 808, 813, 854, 823, 830, 835, 800, 847, 586, 591, 568, 601, 608, 613, 578, 625, 678, 673, 632, 663, 656, 651, 686, 639],
        [915, 888, 877, 890, 883, 864, 905, 866, 857, 820, 831, 818, 825, 844, 803, 842, 571, 598, 609, 596, 603, 622, 581, 620, 629, 666, 655, 668, 661, 642, 683, 644],
        [876, 901, 886, 917, 874, 903, 862, 907, 832, 807, 822, 855, 834, 805, 846, 801, 610, 585, 600, 569, 612, 583, 624, 579, 654, 679, 664, 631, 652, 681, 640, 685],
        [887, 916, 875, 902, 863, 906, 865, 904, 821, 856, 833, 806, 845, 802, 843, 804, 599, 570, 611, 584, 623, 580, 621, 582, 665, 630, 653, 680, 641, 684, 643, 682],
    ],
]

const Lines = (dimensions, sliderVal, num, end) => {
    const [linesToDraw, setLinesToDraw] = useState(0)

    useEffect(() => {
        if (end)
        {
            setLinesToDraw(num)
        }
    }, [linesToDraw, num])
    
    useEffect(() => {
        if (!end && linesToDraw < num)
        {
            const timer = setTimeout(() => {
                setLinesToDraw(linesToDraw + 1)
            }, sliderVal < 12 ? 100 : sliderVal < 24 ? 50 : 0) // 500 milliseconds = half a second
        
            return () => clearTimeout(timer)
        }
    }, [linesToDraw, num])

    useEffect(() => {
        setLinesToDraw(0);
    }, [num])

    const lines = []
    for (let i = 0; i < linesToDraw; i++)
    {
        lines.push(
            <Xarrow
                key={i}
                zIndex={100}
                start={`${num}-sq${i}`}
                startAnchor='middle'
                end={`${num}-sq${(i + 1) % num}`}
                endAnchor='middle'
                showHead={false}
                curveness={0}
                lineColor='#ff5e59'
                strokeWidth={2}
            />
        )
    }

    const board = <Box>{boards[(sliderVal - 6) / 2].map((cell) =>
        <Row key={cell} align="center">{cell.map((number) =>
            <Col key={number} style={{ padding: 0 }}>
                {Square(dimensions.width / sliderVal, number, sliderVal ** 2,
                    number <= linesToDraw ? '#63636363' : null)}
            </Col>)}
        </Row>)}
    </Box>

    return (
        <div>
            {board}
            {lines}
        </div>
    )
}

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 100%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`
const Solver = () => {
    const refContainer = useRef()
    const [dimensions, setDimensions] = useState({ width: 0, height: 0 })
    const [endAnimation, setEndAnimation] = useState(false)

    useEffect(() => {
        window.scrollTo(0, 0)
        if (refContainer.current) {
            setDimensions({
                width: refContainer.current.clientWidth,
                height: refContainer.current.clientHeight,
            })
        }
    }, [])

    const [sliderValue, setSliderValue] = useState(6)


    return (
        <Layout>
            <Container maxW="container.md">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <GradientText>
                            <Heading
                                variant="section-title"
                            >
                                Drag the slider below to see different knight&apos;s tours
                            </Heading>
                        </GradientText>
                    </Box>
                </Box>

                <Box display={{ md: "flex" }} mt={6} ref={refContainer}>
                    <Stack spacing={10}>
                        <Xwrapper>
                            <Box pt={6} pb={2}>
                                <Slider defaultValue={6} min={6} max={32} step={2} onChange={(val) =>
                                { setSliderValue(val); setEndAnimation(false) }}>
                                    {/* {sliderVals.map((v) => <SliderMark value={v} {...labelStyles}>{v}</SliderMark>)} */}
                                    <SliderMark
                                        value={sliderValue}
                                        textAlign='center'
                                        bg='linear-gradient(135deg, #ff7c20, #ff4093)'
                                        color={useColorModeValue("white", "black")}
                                        mt='-10'
                                        ml='-5'
                                        w='12'
                                    >
                                        {sliderValue}
                                    </SliderMark>
                                    <SliderTrack>
                                        <SliderFilledTrack bg='linear-gradient(90deg, #ff7c20, #ff4093)' />
                                    </SliderTrack>
                                    <SliderThumb />
                                </Slider>
                                <Button
                                    onClick={() => setEndAnimation(true)}
                                    bg="linear-gradient(135deg, #ff7c20, #ff4093)"
                                    color={useColorModeValue('white', 'black')}
                                    _hover={{bg: "linear-gradient(135deg, #ee7c20, #ee4093)"}}
                                    colorScheme="transparent"
                                >Skip animation</Button>
                            </Box>
                            {Lines(dimensions, sliderValue, sliderValue ** 2, endAnimation)}
                        </Xwrapper>
                    </Stack>
                </Box>
            </Container>
        </Layout>
    )
}

export default Solver
