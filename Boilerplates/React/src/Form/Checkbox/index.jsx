import React from 'react'

export default props => (
  <label>
    <input
      name={name}
      type="checkbox"
      value={value}
      onChange={onChange}
      onClick={onClick}
      checked={checked}
      defaultChecked={defaultChecked}
      disabled={checkbox.disabled || disabled}
    />
    <span className="space">{label}</span>
  </label>
)
