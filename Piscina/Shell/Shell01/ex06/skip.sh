#!/bin/bash
ls -l | awk '{print;getline}'
