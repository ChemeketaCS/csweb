#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'files',
        'clean_files': True,
	'unzip_files': True,
        'sort_files': True,
        #'copy_files': ['makefile', 'doctest.h'],
    }),
    Task({
        'name': 'make',
        'makefile': 'makefile',
        'make_max_time': 20,
        'make_output_file': '__make_out',
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'exe': 'item.exe',
                'max_time': 1,
                'output_file': '__item_output',
                'append_output_file': False,
            }),
            Run({
                'exe': 'character.exe',
                'max_time': 1,
                'output_file': '__character_output',
                'append_output_file': True,
            }),
        ]
    }),
]

pygrader.execute(tasks)
