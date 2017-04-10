{
  "targets":[
    {
      "target_name": "hello",
      "sources": [
        "binding.cc"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}